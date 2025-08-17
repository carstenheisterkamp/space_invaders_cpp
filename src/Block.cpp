#include "Block.h"

Block::Block(const Vector2 position) {
    this->position = position;
}

Block::~Block() = default;

void Block::Draw() const {
    DrawRectangle(position.x, position.y, 3, 3, {243, 216, 63 ,255});
}