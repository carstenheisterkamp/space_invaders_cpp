#include "Game.h"
#include <algorithm>
#include <iostream>
#include <ostream>

Game::Game() = default;

Game::~Game() = default;

void Game::Update() {
    for (auto& laser: spaceShip.lasers) {
        laser.Update();
    }
    DeleteInactiveLasers();
    std::cout << "\r" << "Vector Size: " << spaceShip.lasers.size();
    std::cout.flush();
}

void Game::Draw() const {
    spaceShip.Draw();
    for (auto& laser: spaceShip.lasers) {
        laser.Draw();
    }
}

void Game::Input() {
    if (IsKeyDown(KEY_LEFT)) {
        spaceShip.MoveLeft();
    }

    if (IsKeyDown(KEY_RIGHT)) {
        spaceShip.MoveRight();
    }

    if (IsKeyDown(KEY_SPACE)) {
        spaceShip.FireLaser();
    }
}

void Game::DeleteInactiveLasers() {
    spaceShip.lasers.erase(
        std::ranges::remove_if(spaceShip.lasers,
                               [](const Laser& laser) {
                                   return !laser.active;
                               }).begin(),
        spaceShip.lasers.end()
    );
}


