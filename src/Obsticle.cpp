// "Copyright [2019] <Copyright MB>"
#include <iostream>
#include "Obsticle.h"
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>

using sf::Vector2f;
using sf::RectangleShape;
using sf::Color;

Obsticle::Obsticle(Vector2f O_pos) {
    setPosition(O_pos);
    setSize(Vector2f(15.0f, 15.0f));
    setFillColor(Color::Yellow);
}
