//
// Created by scansy on 2025-09-01.
//

#ifndef FIGHTING_GAME_GAMEMANAGER_H
#define FIGHTING_GAME_GAMEMANAGER_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "Stage.h"
#include "Player.h"

class GameManager
{
private:
    sf::RenderWindow win;
    Player player1;
    Player player2;
    Stage stage;

public:
    GameManager(const PlayerConfig& config);
    void draw();
    void update();

};

#endif //FIGHTING_GAME_GAMEMANAGER_H