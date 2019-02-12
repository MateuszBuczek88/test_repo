// "Copyright [2019] <Copyright MB>"
#include <math.h>
#include <iostream>
#include <complex>
#include <chrono>
#include <ctime>
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include "Obsticle.h"
#include "Scene.h"
#include "Robot.h"
#include "Target.h"

using sf::RenderWindow;
using sf::Event;
using sf::Keyboard;


int main() {
    Target target(Vector2f(100.f, 100.f));
    Robot    robot(Vector2f(1.4f, 10.f));
    Obsticle obstacle1(Vector2f(300.f, 300.f));

    robot.setTarget(&target);

    Scene scene1(&robot, &target);

    RenderWindow window(sf::VideoMode(500, 500), "SFML works!");

    float deltaTime = 0;


    while (window.isOpen()) {
        auto start = std::chrono::system_clock::now();
        std::chrono::duration<float> time_RES;

        Event event;

        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)

                window.close();

            if (event.type == Event::KeyPressed) {
                switch (event.key.code) {
                case Keyboard::Key::A:
                {
                    target.move(-10.f, 0);
                    break;
                }
                case Keyboard::Key::D:
                {
                    target.move(10.f, 0);
                    break;
                }
                case Keyboard::Key::W:
                {
                    target.move(0, -10.f);
                    break;
                }

                case Keyboard::Key::S:
                {
                    target.move(0, 10.f);
                    break;
                }
                }
            }
        }


        robot.update(deltaTime);


        window.clear();

        window.draw(scene1);

        window.display();


        auto end = std::chrono::system_clock::now();

        time_RES = end-start;

        deltaTime = time_RES.count();
    }


    return 0;
}




