// "Copyright [2019] <Copyright MB>"
#ifndef INCLUDE_OBSTICLE_H_
#define INCLUDE_OBSTICLE_H_
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>

using sf::Vector2f;
using sf::RectangleShape;


class Obsticle :public RectangleShape {
 public:
        explicit Obsticle(sf::Vector2f O_pos);

 protected:
 private:
};

#endif  // INCLUDE_OBSTICLE_H_
