#pragma once
#include "../includes.hpp"
#include "../Character/Character.hpp"
#include "../Animatable.hpp"

class Enemy : public Character {
    protected:
        sf::Sprite eSprite;
        sf::Vector2f originalPos;
        sf::Vector2f moving;
        string name;
        float attackChance; // Chance de ataque a cada 1/60 segundos

    public:
        virtual void attack() = 0;
};