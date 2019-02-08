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

          Robot(Vector2f IN_pos);
            Robot();



  void update(float deltaTime);
  void setTarget(Target* target);
private:
  Target* c_target;




};

#endif // ROBOT_H
