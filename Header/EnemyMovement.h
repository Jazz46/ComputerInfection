#ifndef ENEMYMOVEMENT_H
#define ENEMYMOVEMENT_H

#include "Movement.h"
#include "Enemy.h"

class EnemyMovement : public Movement
{
    public:
    void movement(Enemy *, Player*, Map *, bool&);

    private:
    void newPosition(Enemy*, Map*);
    void collisionWithPlayer(Player*, Map*);
};
#endif