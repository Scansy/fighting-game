//
// Created by scansy on 2025-08-31.
//

#ifndef FIGHTING_GAME_PLAYER_H
#define FIGHTING_GAME_PLAYER_H

class Player
{
    private:
    const float gravity;
    const float speed;
    const float jumpSpeed;
    float velocityY;
    bool isOnGround;

    public:
    Player(float gravity, float speed, float jumpSpeed);

};

#endif //FIGHTING_GAME_PLAYER_H