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
    Scene(Robot & robot, Target & target);
    void addObstacle( Vector2f position, float size);
    ~Scene();
    virtual void 	draw (RenderTarget &target, RenderStates states) const;

    void draw(Robot r, Target t);
    CircleShape c_target;
    CircleShape c_robot;

protected:

private:
};

#endif // SCENE_H
