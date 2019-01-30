#ifndef GOAL_H
#define GOAL_H
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include <iostream>
using namespace std;
using namespace sf;


class Goal
{
    Vector2f goal_pos;

    public:

    Goal(Vector2f INgoal_pos);
};

#endif // GOAL_H
