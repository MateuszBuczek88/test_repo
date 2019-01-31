#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include <iostream>
#include "Player.h"
#include "Goal.h"
#include "Obsticle.h"
#include <math.h>


using namespace std;
using namespace sf;

void generate_obstacle(RectangleShape &object, float pos_x, float pos_y);
Vector2f calc_dir(Vector2f pl_pos, Vector2f g_pos);

int main()
{
    RenderWindow window(sf::VideoMode(500, 500), "SFML works!");

    sf::CircleShape player(15.f);

    player.setFillColor(sf::Color::Red);
    player.setPosition(0.0f, 0.0f);

    sf:: CircleShape goal(25.f);

    goal.setFillColor(sf::Color::Blue);
    goal.setPosition(250.0f, 400.0f);

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
                    Vector2f position = goal.getPosition();
                    position.x -= 10.0f;
                    goal.setPosition(position);
                    break;
                }
                case sf::Keyboard::Key::D:
                {
                    Vector2f position = goal.getPosition();
                    position.x += 10.0f;
                    goal.setPosition(position);
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

        // Player p1(player.getPosition());
        //p1.new_pos(goal.getPosition());
        player.move(calc_dir(player.getPosition(),goal.getPosition()));

        window.clear();

        window.draw(player);
        window.draw(goal);
        window.draw(obstacle);
        window.draw(obstacle2);
        window.draw(obstacle3);

        window.display();
    }


//  calc_dir(player.getPosition(),goal.getPosition());
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

Vector2f calc_dir(Vector2f pl_pos, Vector2f g_pos)
{

    if (((g_pos.x-pl_pos.x)>-5.0f)&&((g_pos.y-pl_pos.y)>-5.0f))
    {
        float lenght;


        Vector2f result;

        result = g_pos - pl_pos;


        result.x=fabs(result.x);
        result.y=fabs(result.y);



        lenght=sqrtf(fabs((powf(result.x,2)-powf(result.y,2))));
        // cout <<lenght;


        Vector2f output;
        output.x=result.x/(lenght*10);
        output.y=result.y/(lenght*10);


        return output;

    }
    else

    {
          Vector2f v4(0.0f,0.0f);
          return v4;
    }

}
// https://www.sfml-dev.org/documentation/2.5.1/modules.php

