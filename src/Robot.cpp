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
  //  cout <<pl_pos.y<<endl;


    float lenght;


        Vector2f result;

        result = g_pos - pl_pos;

        lenght=sqrtf(powf(result.x,2)+powf(result.y,2));

        Vector2f output;

        output.x=result.x*(deltaTime*50)/(lenght);
        output.y=result.y*(deltaTime*50)/(lenght);

      //  float colision_x=((pl_pos.x+7.5f)-(ob_pos.x+12.5f));
     //   float colision_y=((pl_pos.y+7.5f)-(ob_pos.y+12.5f));


     //     if((fabs(colision_x))<40.0f&&(fabs(colision_y))<40.0f)
      //  {

         //   if((fabs(colision_y))>(fabs(colision_x)))
           // {
             //   output.y=0.0f;
               // return output;
           // }
           // else{
           // output.x=0.0f;
           // return output;
            //}

         //   return output;
       // }
          //  cout << output.x <<endl<< output.y;
        move(output);

   // }
//    else

  //  {
    //      Vector2f v4(0.0f,0.0f);
      //    return v4;
    //}

}
