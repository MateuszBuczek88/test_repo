#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include <iostream>
using namespace std;
using namespace sf;


class Player
{
public:
  sf::Vector2f player_pos;


public:

    Player(Vector2f INplayer_pos);


    void new_pos(Vector2f goal_pos);



};

#endif // PLAYER_H
