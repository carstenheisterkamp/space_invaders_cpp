#ifndef SPACEINVADERSCPP_SPACESHIP_H
#define SPACEINVADERSCPP_SPACESHIP_H
#include <raylib.h>
#include <vector>
#include "Laser.h"

class SpaceShip {
    public:
        SpaceShip();
        ~SpaceShip();

        void MoveLeft();
        void MoveRight();
        void FireLaser();
        void Draw() const;
        std::vector<Laser> lasers;

    private:
        Texture2D texture{};
        Vector2 position{};
        double lastFireTime;
};
#endif