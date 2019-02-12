// "Copyright [2019] <Copyright MB>"
#ifndef INCLUDE_SCENE_H_
#define INCLUDE_SCENE_H_
#include<iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include "Robot.h"
#include "Target.h"

using sf::CircleShape;
using sf::Vector2f;
using sf::Drawable;
using sf::RenderTarget;
using sf::RenderStates;


class Scene : public Drawable {
 public:
    Scene();
    Scene(Robot * robot, Target * target);

    virtual void draw(RenderTarget &target, RenderStates states) const;

 private:
    Target* c_target;
    Robot* c_robot;

 protected:
};

#endif  // INCLUDE_SCENE_H_
