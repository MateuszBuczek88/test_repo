#include "Player.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
using namespace std;
using namespace sf;

Player::Player(Vector2f INplayer_pos)

{
    player_pos=INplayer_pos;
}

void Player::new_pos(Vector2f goal_pos)
{
    if ((player_pos.x < goal_pos.x)&&(player_pos.y < goal_pos.y))
    {
        player_pos.x+=0.1;
        player_pos.y+=0.1;
    }
    else if ((player_pos.x < goal_pos.x)&&(player_pos.y >= goal_pos.y))
    {
        player_pos.x+=0.1;
       // player_pos.y+=1;
    }
   else  if ((player_pos.x >= goal_pos.x)&&(player_pos.y < goal_pos.y))
    {
       // player_pos.x+=1;
        player_pos.y+=0.1;
    }
}
