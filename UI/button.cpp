#include "button.hpp"

Button::Button(State *&s,sf::Font *&f, float w, float h) 
{
    width=w;
    height=h;
    text.setFont(*f);
    text.setFillColor(sf::Color::White);
    rectangle.setSize(sf::Vector2f(300, 60));
    Press=false;
}

Button::Button(std::string str,State *&state,sf::Font *&font,float w, float h,float x,float y,sf::RenderWindow *&wind,State::Button_state a)
{
    add=a;
    window=wind;
    width=w;
    height=h;
    text.setFont(*font);
    text.setFillColor(sf::Color::White);
    rectangle.setSize(sf::Vector2f(300, 60));
    Press=false;
    text.setString(sf::String::fromUtf8(str.begin(), str.end()));
    text.setPosition(x - text.getLocalBounds().width / 2, y - rectangle.getLocalBounds().height * 0.4);
    rectangle.setSize(sf::Vector2f(750 , 50));
    rectangle.setPosition(x - rectangle.getLocalBounds().width / 2, y - rectangle.getLocalBounds().height / 2);
    isPressed(rectangle);
    if(Press)
        rectangle.setFillColor(sf::Color::White);
    else
        rectangle.setFillColor(sf::Color::Black);
    if (rectangle.getFillColor() == sf::Color::Black)
        text.setFillColor(sf::Color::White);
    else
        text.setFillColor(sf::Color::Black);
    window->draw(rectangle);
    window->draw(text);
}

void Button::isPressed(sf::RectangleShape rect)
    {
        sf::Vector2i pos=sf::Mouse::getPosition();
        if (rect.getGlobalBounds().contains(pos.x,pos.y))
                Press=true;
    }
