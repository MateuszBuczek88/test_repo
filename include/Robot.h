#ifndef ROBOT_H
#define ROBOT_H
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include "Target.h"

using namespace std;
using namespace sf;



class Robot : public CircleShape
{
public:

    Robot(Vector2f IN_position);
    Robot();



    void update(float deltaTime);
    void setTarget(Target* target);



    Target* c_target;
    Vector2f direction;




};

#endif // ROBOT_H
