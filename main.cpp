#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include <iostream>
#include "Player.h"
#include "Goal.h"
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


void generate_obstacle(RectangleShape &object, float pos_x, float pos_y);
Vector2f calc_dir(Vector2f pl_pos, Vector2f g_pos, Vector2f ob_post);

int main()

{

    Target t1   (Vector2f(100.f,100.f));
    Robot r1    (Vector2f(1.4f,10.f));
    Obsticle o1 (Vector2f(300.f,300.f));

    r1.setTarget(&t1);
    Scene s1(&r1,&t1);

    RenderWindow window(sf::VideoMode(500, 500), "SFML works!");

    float deltaTime;


    while (window.isOpen())
    {
    auto start = std::chrono::system_clock::now();
    std::chrono::duration<float> time_RES;

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed )
            {
                switch(event.key.code)
                {
                case sf::Keyboard::Key::A:
                {
                    t1.move(-10.f,0);
                    break;
                }
                case sf::Keyboard::Key::D:
                {
                    t1.move(10.f,0);
                    break;

                }
                case sf::Keyboard::Key::W:
                {
                     t1.move(0,-10.f);
                     break;
                }

                case sf::Keyboard::Key::S:
                {
                    t1.move(0,10.f);
                    break;
                }
                }
            }
        }




        window.clear(Color::Black);

            window.draw(s1);

        window.display();


            r1.update(deltaTime);


        window.clear();

            window.draw(s1);

        window.display();

        auto end = std::chrono::system_clock::now();
        time_RES = end-start;
        deltaTime=time_RES.count();
    }


    return 0;
}




