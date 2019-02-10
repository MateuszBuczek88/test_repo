#include "Robot.h"
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include <iostream>
using namespace std;
using namespace sf;


Robot::Robot()
{

}
Robot::Robot(Vector2f IN_pos)
{
  setPosition(IN_pos);
  setRadius(15.f);
  setFillColor(Color::Red);


}


void Robot::setTarget(Target* target)
{

    c_target = target;
}

void Robot::update(float deltaTime)
{

    Vector2f pl_pos;
    Vector2f g_pos;
    pl_pos=getPosition();
    g_pos=c_target->getPosition();

        if (pl_pos!=g_pos)
        {
    cout <<pl_pos.x<<endl;
    cout <<pl_pos.y<<endl;
    cout <<g_pos.x<<endl;
    cout <<g_pos.y<<endl;



    float lenght;


        Vector2f result;

        result = g_pos - pl_pos;

        lenght=sqrtf(powf(result.x,2)+powf(result.y,2));

        Vector2f output;

        output.x=result.x*(deltaTime*50)/(lenght+1);
        output.y=result.y*(deltaTime*50)/(lenght+1);

        move(output);
        }
}
