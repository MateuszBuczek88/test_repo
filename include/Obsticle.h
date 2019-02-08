#ifndef OBSTICLE_H
#define OBSTICLE_H
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
using namespace std;
using namespace sf;


class Obsticle : public RectangleShape
{
    public:
        Obsticle(Vector2f O_pos);
        virtual ~Obsticle();

    protected:

    private:
};

#endif // OBSTICLE_H
