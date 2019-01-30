#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include <iostream>
#include "Player.h"
#include "Goal.h"
#include "Obsticle.h"


using namespace std;
using namespace sf;

void generate_obstacle(RectangleShape &object, float pos_x, float pos_y);

int main()
{
    RenderWindow window(sf::VideoMode(500, 500), "SFML works!");

    sf::CircleShape player(15.f);

    player.setFillColor(sf::Color::Red);
    player.setPosition(0.0f, 0.0f);

    sf:: CircleShape goal(25.f);

    goal.setFillColor(sf::Color::Blue);
    goal.setPosition(250.0f, 450.0f);

    sf::RectangleShape obstacle(Vector2f(25,25));

    obstacle.setPosition(150.0f,100.0f);
    obstacle.setFillColor(Color::Yellow);

    RectangleShape obstacle2;
    generate_obstacle(obstacle2,200.0f,200.0f);

    RectangleShape obstacle3;
    generate_obstacle(obstacle3,120.0f,230.0f);

    RectangleShape obstacle4;





    ;



    while (window.isOpen())
    {
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
                    Vector2f position = player.getPosition();
                    position.x += 10.0f;
                    player.setPosition(position);
                    break;
                }
                }
            }
        }

        window.clear(Color::Black);

        window.draw(player);
        window.draw(goal);
        window.draw(obstacle);
        window.draw(obstacle2);
        window.draw(obstacle3);


        window.display();
        Player p1(player.getPosition());
    p1.new_pos(goal.getPosition());
        player.setPosition(p1.player_pos);
        window.clear();

        window.draw(player);
        window.draw(goal);
        window.draw(obstacle);
        window.draw(obstacle2);
        window.draw(obstacle3);

        window.display();
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
// https://www.sfml-dev.org/documentation/2.5.1/modules.php

