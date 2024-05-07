#ifndef BUTTON_H
#define BUTTON_H
#include <SFML/Graphics.hpp>
#include "page.h"

class Button 
{
public:
    Button(State *&, sf::Font *&, float, float);
    Button(std::string,State *&,sf::Font *&,float , float ,float,float,sf::RenderWindow *&,State::Button_state);
    ~Button();
    void isPressed(sf::RectangleShape);
    sf::RectangleShape rectangle;
    sf::Text text;
    bool Press;
    State::Button_state add;

private:
    sf::RenderWindow *window;
    sf::Font font;
    State state;

    float width;
    float height;

};

#endif