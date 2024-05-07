#include "../UI/state.h"

State::State()
{
    a=state::loading_page; 
}

void State::set_state(State::state new_state)
{
    a=new_state;
}

State::state State::get_state()
{
    return a;
}

void State::set_state_button(State::Button_state a)
{
    Button_s=a;
}

State::Button_state State::get_state_button()
{
    return Button_s;
}

State::~State(){}
