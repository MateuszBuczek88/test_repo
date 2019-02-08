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



    Robot r1(Vector2f(1.4f,10.f));
    Obsticle o1(Vector2f(300.f,300.f));
    Target t1(Vector2f(100.f,100.f));
    r1.setTarget(&t1);


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
                    Vector2f position = t1.getPosition();

                    position.x -= 10.0f;
                    t1.setPosition(position);

                    break;
                }
                case sf::Keyboard::Key::D:
                {
                    Vector2f position = t1.getPosition();
                    position.x += 10.0f;
                    t1.setPosition(position);

                    break;

                }
                case sf::Keyboard::Key::W:
                {
                    Vector2f position = t1.getPosition();
                    position.y -= 10.0f;
                    t1.setPosition(position);
                    break;
                }
                case sf::Keyboard::Key::S:
                {
                    Vector2f position = t1.getPosition();
                    position.y += 10.0f;
                    t1.setPosition(position);
                    break;
                }
                }
            }
        }



        window.clear(Color::Black);

        window.draw(r1);
        window.draw(t1);
        window.draw(o1);

        window.display();


        r1.update(deltaTime);


        window.clear();

        window.draw(r1);
        window.draw(t1);
        window.draw(o1);


        window.display();
        auto end = std::chrono::system_clock::now();
        time_RES = end-start;
        deltaTime=time_RES.count();
    }









    return 0;
}

/*    sf::Vertex line[] =
       {
           sf::Vertex(sf::Vector2f(10, 10)),
           sf::Vertex(sf::Vector2f(150, 150)),
           sf::Vertex(sf::Vector2f(190, 150))
       };

      window.draw(line, 3, sf::LinesStrip); */

void generate_obstacle(RectangleShape &object, float pos_x, float pos_y)
{

    object.setSize(sf::Vector2f(25,25));
    object.setFillColor(Color::Yellow);
    object.setPosition(pos_x, pos_y);

}


