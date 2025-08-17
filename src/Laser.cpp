#include "Laser.h"
#include <iostream>
#include <ostream>
#include <raylib.h>

Laser::Laser(Vector2 position, float speed) {
    this->position = position;
    this->speed = speed;
    active = true;
}

Laser::~Laser() = default;

void Laser::Update() {
    position.y += speed;
    if (active) {
        if (position.y > GetScreenHeight() || position.y < 0) {
            active = false;
            std::cout  << "Laser inactive" << std::endl;
        }
    }
}

void Laser::Draw() const {
    if (active) {
        DrawRectangle(position.x, position.y, 4, 15, {214,216, 63, 255});
    }
}


