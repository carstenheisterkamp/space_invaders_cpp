#ifndef SPACEINVADERSCPP_OBSTACLE_H
#define SPACEINVADERSCPP_OBSTACLE_H
#pragma once
#include <raylib.h>
#include <vector>
#include "Block.h"

class Obstacle {
    public:
        explicit Obstacle(Vector2 position);
        ~Obstacle();
        void Draw() const;
        Vector2 position{};
        std::vector<Block> blocks;
        std::vector<std::vector<int>> grid;
    private:
};

#endif //SPACEINVADERSCPP_OBSTACLE_H