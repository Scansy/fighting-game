#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    int width = 1280;
    int height = 720;
    sf::RenderWindow window(sf::VideoMode(width, height), "Hello world!");
    sf::RectangleShape stage({static_cast<float>(width), static_cast<float>(height) / 4});
    sf::RectangleShape player({100, 200});

    window.setFramerateLimit(60);
    player.setFillColor(sf::Color::Red);
    stage.setPosition(sf::Vector2f(0, static_cast<float>(height) / 2 + static_cast<float>(height) / 4));

    const float speed = 6.f;
    const float gravity = 1.f;
    const float jumpSpeed = -15.f;
    float velocityY;
    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        bool isPlayerOnGround = player.getGlobalBounds().intersects(stage.getGlobalBounds());
        std::cout << "is player on ground: " << isPlayerOnGround << std::endl;
        if (isPlayerOnGround)
            velocityY = 0;

        // Checking for input
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && isPlayerOnGround)
        {
            velocityY = jumpSpeed;
            player.move(0.f, velocityY);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            player.move(-speed, 0.f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            player.move(speed, 0.f);

        // Simulate gravity
        if (!isPlayerOnGround)
            velocityY += gravity;
        player.move(0, velocityY);

        window.clear();
        window.draw(stage);
        window.draw(player);
        window.display();
    }
    return 0;
}

// WORK ON GRAVITY!!!