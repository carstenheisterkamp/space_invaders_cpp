//
// Created by Carsten Heisterkamp on 16.08.25.
//

#ifndef SPACEINVADERSCPP_BLOCK_H
#define SPACEINVADERSCPP_BLOCK_H
#include "raylib.h"

class Block {
    public:
        explicit Block(Vector2 position);
        ~Block();
        void Draw() const;
    private:
        Vector2 position{};
};


#endif //SPACEINVADERSCPP_BLOCK_H