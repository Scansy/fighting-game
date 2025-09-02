//
// Created by scansy on 2025-09-01.
//

#ifndef FIGHTING_GAME_STAGE_H
#define FIGHTING_GAME_STAGE_H
#include <SFML/Graphics/RectangleShape.hpp>

class Stage
{
private:
    sf::RenderWindow window;
    sf::RectangleShape platform;
    float width;
    float height;
    // maybe background in the future?

public:
    Stage(sf::RenderWindow &win, float w, float h);

    float getWidth();
    float getHeight();
};

#endif //FIGHTING_GAME_STAGE_H