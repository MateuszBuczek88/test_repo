#ifndef SCENE_H
#define SCENE_H
#include<iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include "Robot.h"
#include "Target.h"

using namespace std;
using namespace sf;


class Scene : public Drawable
{
public:

    Scene();
    Scene(Robot * robot, Target * target);
    ~Scene();


    virtual void 	draw (RenderTarget &target, RenderStates states) const;


    Target* c_target;
    Robot* c_robot;

protected:

private:
};

#endif // SCENE_H
