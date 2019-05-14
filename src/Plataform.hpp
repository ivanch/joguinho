#pragma once
#include "includes.hpp"

class Plataform{
    private:
        sf::RectangleShape rect;
        sf::Color color;
        sf::Texture* texture;

    public:
        Plataform(sf::FloatRect shape, sf::Color _col);
        Plataform(sf::FloatRect shape, sf::Texture* _tex);
        ~Plataform();

        void draw(sf::RenderWindow& window);
        sf::FloatRect getRect();

};
