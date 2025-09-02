//
// Created by scansy on 2025-09-01.
//

#ifndef FIGHTING_GAME_PLAYERCONFIG_H
#define FIGHTING_GAME_PLAYERCONFIG_H

class PlayerConfig
{
public:
    float playerSpeed = 6.f;
    float playerJumpSpeed = -15.f;
    float playerGravity = 1.f;
    std::pair<float, float> playerSize = std::pair<float, float>{100, 200};
};
#endif //FIGHTING_GAME_PLAYERCONFIG_H