#include "SpaceShip.h"
#include <raylib.h>

SpaceShip::SpaceShip() {
    texture = LoadTexture("../assets/images/spaceShip.png");
    position = Vector2((GetScreenWidth() - texture.width)/2, (GetScreenHeight() - texture.height)-50);
    lastFireTime = 0.0;
}

SpaceShip::~SpaceShip() {
    UnloadTexture(texture);
}

void SpaceShip::MoveLeft() {
    position.x -=7;
    if (position.x < 0) {
        position.x = 0;
    }
}

void SpaceShip::MoveRight() {
    position.x +=7;
    if (position.x > GetScreenWidth()) {
        position.x = GetScreenWidth();
    }

}

void SpaceShip::FireLaser() {
    if (GetTime() - lastFireTime >= 0.35) {
        lasers.push_back(Laser({position.x + texture.width/2 - 2, position.y},-6));
        lastFireTime = GetTime();
    }
}

void SpaceShip::Draw() const {
    DrawTextureV(texture, position, WHITE);
}
