// "Copyright [2019] <Copyright MB>"
#ifndef INCLUDE_TARGET_H_
#define INCLUDE_TARGET_H_
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>

using sf::CircleShape;
using sf::Vector2f;


class Target :  public CircleShape {
 public:
        Target();
        explicit Target(Vector2f T_pos);
};

#endif  // INCLUDE_TARGET_H_
