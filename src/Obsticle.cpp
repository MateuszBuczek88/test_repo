#include "Obsticle.h"
#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
using namespace std;
using namespace sf;

Obsticle::Obsticle(Vector2f O_pos)
{
    setPosition(O_pos);
    setSize(Vector2f(15.0f,15.0f));
    setFillColor(Color::Yellow);
}

Obsticle::~Obsticle()
{
    //dtor
}
