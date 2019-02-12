// "Copyright [2019] <Copyright MB>"
#ifndef INCLUDE_ROBOT_H_
#define INCLUDE_ROBOT_H_
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include "Target.h"

using sf::CircleShape;
using sf::Vector2f;

class Robot : public CircleShape {
 public:
    Robot();
    explicit Robot(Vector2f IN_position);

    void update(float deltaTime);
    void setTarget(Target* target);

 private:
    Target* c_target;
    Vector2f direction;
};

#endif  // INCLUDE_ROBOT_H_
