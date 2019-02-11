#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include <iostream>
#include "Obsticle.h"
#include <math.h>
#include <complex>
#include "Scene.h"
#include "Robot.h"
#include "Target.h"
#include <chrono>
#include <ctime>


using namespace std;
using namespace sf;




int main()

{

    Target   target1        (Vector2f(100.f,100.f));
    Robot    robot1          (Vector2f(1.4f,10.f));
    Obsticle obstacle1          (Vector2f(300.f,300.f));

    robot1.setTarget(&target1);

    Scene scene1(&robot1,&target1);

    RenderWindow window(sf::VideoMode(500, 500), "SFML works!");

    float deltaTime=0;


    while (window.isOpen())
    {
        auto start = std::chrono::system_clock::now();
        std::chrono::duration<float> time_RES;

        Event event;

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)

                window.close();

            if (event.type == Event::KeyPressed )
            {
                switch(event.key.code)
                {
                case Keyboard::Key::A:
                {
                    target1.move(-10.f,0);
                    break;
                }
                case Keyboard::Key::D:
                {
                    target1.move(10.f,0);
                    break;

                }
                case Keyboard::Key::W:
                {
                    target1.move(0,-10.f);
                    break;
                }

                case Keyboard::Key::S:
                {
                    target1.move(0,10.f);
                    break;
                }
                }
            }
        }


        robot1.update(deltaTime);


        window.clear();

        window.draw(scene1);

        window.display();


        auto end = std::chrono::system_clock::now();

        time_RES = end-start;

        deltaTime=time_RES.count();

    }


    return 0;
}




