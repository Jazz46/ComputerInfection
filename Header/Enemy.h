#ifndef ENEMY_H
#define ENEMY_H

#include "Entity.h"
class Enemy : public Entity
{
    private:
        bool is_boss;
        int dir;
        bool alive;
    public:
        Enemy(int x, int y, string path, bool is_boss, int speed);
        void move();
        void set_dir(int dir);
        int get_dir();
        bool getAlive();
        bool getIsBoss();
        void die();
};
#endif