#pragma once
#include "SpaceShip.h"
#include "Obstacle.h"
#include "Alien.h"
#include "MysteryShip.h"

class Game {
    public:
        Game();
        ~Game();

        void Update();
        void Draw() const;
        void Input();
        bool run;
        int lives;
        int score;
        int highscore;
        Music music;
    private:
        SpaceShip spaceShip;
        void DeleteInactiveLasers();
        std::vector<Obstacle> obstacles;
        std::vector<Obstacle> CreateObstacles;
        void MoveAliens();
        void MoveDownAliens(int distance);
        void AlienShootLaser();
        void CheckForCollision();
        void GameOver();
        void Reset();
        void InitGame();
        void CheckForHighScore();
        void SaveHighScoreToFile(int highscore);
        void LoadHighScoreFromFile();
        std::vector<Alien> aliens;
        int aliensDirection;
        std::vector<Laser> alienLasers;
        constexpr static float alienLaserShootInterval = 0.35;
        float timeLastAlienFired;
        MysteryShip mysteryShip;
        float mysteryShipSpawnInterval;
        float timeLastSpawn;
        Sound explosionSound;
};