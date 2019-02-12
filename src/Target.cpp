// "Copyright [2019] <Copyright MB>"
#include "Target.h"
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>

using sf::Color;

Target::Target() {
}

Target::Target(Vector2f T_pos) {
    setPosition(T_pos);
    setRadius(25.f);
    setFillColor(Color::Green);
}
