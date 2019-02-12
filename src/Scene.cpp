// "Copyright [2019] <Copyright MB>"
#include<iostream>
#include "Scene.h"
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>

Scene::Scene() {
}

Scene::Scene(Robot* robot, Target* target) {
  c_robot = robot;
  c_target = target;
}

void  Scene::draw(RenderTarget &target, RenderStates states) const {
  target.draw(*c_robot, states);
  target.draw(*c_target, states);
}
