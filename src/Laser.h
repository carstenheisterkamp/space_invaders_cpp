#pragma once
#include <raylib.h>

class Laser {
    public:
        Laser(Vector2 position, float speed);
        ~Laser();
        void Update();
        void Draw() const;
        bool active;
    private:
        Vector2 position{};
        float speed;
        double lastTime{};
};