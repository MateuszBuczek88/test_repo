#ifndef TARGET_H
#define TARGET_H
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
using namespace std;
using namespace sf;


class Target :  public CircleShape
{
    public:
        Target(Vector2f T_pos);
        Target();
        virtual ~Target();

    protected:

    private:
};

#endif // TARGET_H
