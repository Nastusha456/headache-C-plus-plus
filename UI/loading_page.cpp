#include "../UI/loading_page.h"
#include <string>

LoadingPage :: LoadingPage(sf::RenderWindow *&w, State *&s, sf::Font *&f, float x, float y) : Page(w,s,f,x,y)
{
    text.setFont(*font);
    text.setFillColor(sf::Color::White);
} 


 
LoadingPage::~LoadingPage() {}

void LoadingPage::update()
{
    processEvents();

    draw();
}

void LoadingPage::processEvents()
{
    sf::Event event;
    while (window->pollEvent(event))
    {
        if(sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
            state->set_state(State::state::main_menu);
    }
}

void LoadingPage::draw()
{
    window->clear(sf::Color::Green);
    text.setCharacterSize(90);
    std::string str = "КУРСОВАЯ РАБОТА";
    text.setString(sf::String::fromUtf8(str.begin(), str.end()));
    text.setPosition(sf::Vector2f((width / 2) - text.getLocalBounds().width / 2, (height * 0.4) - text.getLocalBounds().height / 2));
    window->draw(text);
    text.setCharacterSize(30);
    str = "Троицкая Анастасия и Ряпос Никита";
    text.setString(sf::String::fromUtf8(str.begin(), str.end()));
    text.setPosition(sf::Vector2f((width / 2) - text.getLocalBounds().width / 2, (height * 0.5) - text.getLocalBounds().height / 2));
    window->draw(text);
    text.setCharacterSize(15);
    str = "Для продолжения нажмите любую клавишу. Кроме кнопки питания.";
    text.setString(sf::String::fromUtf8(str.begin(), str.end()));
    text.setPosition(sf::Vector2f((width / 2) - text.getLocalBounds().width / 2, (height * 0.75) - text.getLocalBounds().height / 2));
    window->draw(text);
    window->display();
}