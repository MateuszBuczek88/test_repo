#include "Target.h"
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
using namespace std;
using namespace sf;

Target::Target(Vector2f T_pos)
{
    setPosition(T_pos);
    setRadius(25.f);
    setFillColor(Color::Green);
}
Target::Target()
{
}

Target::~Target()
{
    //dtor
}
