#include<iostream>
#include "Scene.h"
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
using namespace std;
using namespace sf;

Scene::Scene(Robot & robot, Target & target)
{
  c_robot=robot;
  c_target=target;

}
Scene::Scene()
{
    //ctor
}

Scene::~Scene()
{
    //dtor
}

void draw(Robot r, Target t)
{

}

void  Scene::	draw (RenderTarget &target, RenderStates states) const
{
//c_robot.draw(target,states);
}
