//
// Created by scansy on 2025-09-01.
//

#include "Player.h"

Player::Player(const PlayerConfig& config, sf::RenderWindow *win)
{
    gravity = config.playerGravity;
    speed = config.playerSpeed;
    jumpSpeed = config.playerJumpSpeed;
    isOnGround = true;
    velocityY = 0;
    window = win;
    player = sf::RectangleShape({config.playerSize.first, config.playerSize.second});
    // set player starting position here...
}

void Player::update(sf::RectangleShape &stage)
{
    listenInput(stage);
}

void Player::listenInput(sf::RectangleShape &stage)
{
    // Checking if player is on the ground
    // GlobalBounds is a bit too unreliable, might change logic
    bool isPlayerOnGround = player.getGlobalBounds().intersects(stage.getGlobalBounds());
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
}