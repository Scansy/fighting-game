//
// Created by scansy on 2025-08-31.
//

#ifndef FIGHTING_GAME_PLAYER_H
#define FIGHTING_GAME_PLAYER_H

#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics.hpp>
#include "PlayerConfig.h"
#include <iostream>

class Player
{
private:
    float gravity;
    float speed;
    float jumpSpeed;
    float velocityY;
    bool isOnGround;
    sf::RectangleShape player;
    sf::RenderWindow *window;

public:
    Player(const PlayerConfig& config, sf::RenderWindow *win);
    void update(sf::RectangleShape &stage);
    void listenInput(sf::RectangleShape &stage);
};

#endif //FIGHTING_GAME_PLAYER_H