// "Copyright [2019] <Copyright MB>"
#include <iostream>
#include "Robot.h"
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>

using sf::Color;

Robot::Robot() {
}

Robot::Robot(Vector2f IN_position) {
    setPosition(IN_position);
    setRadius(15.f);
    setFillColor(Color::Red);
}


void Robot::setTarget(Target* target) {
    c_target = target;
}

void Robot::update(float deltaTime) {
    Vector2f robot_position;
    Vector2f target_position;

    robot_position = getPosition();
    target_position = c_target->getPosition();

    float vector_lenght;

    Vector2f result;

    result = target_position - robot_position;

    vector_lenght = sqrtf(powf(result.x, 2)+powf(result.y, 2));

    Vector2f output;

    output.x = result.x*(deltaTime*50)/(vector_lenght);
    output.y = result.y*(deltaTime*50)/(vector_lenght);

    if (abs(result.x) > 0.1f || abs(result.y) > 0.1f) {
        move(output);
    }
}
