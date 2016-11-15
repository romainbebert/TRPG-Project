#include <SFML/Graphics.hpp>

class PressStartState : GameState {
	
	private :
		Engine engine_;
		StartRenderer render_;

	public :
		PressStartState::PressStartState(Engine engine, StartRenderer render_) : engine_(engine), render_(render) {}

		PressStartState::~PressStartState(){}

		PressStartState::handleEvent(sf::Event e){
			if(e.type == sf::Event::KeyReleased){
				switch(e.key.code){
					case sf::Keyboard::
					case sf::Keyboard::
					case sf::Keyboard::
				}
			}
		}

		PressStartState::update(double delta){}

		PressStartState::render(sf::Window wind){ render_.render(wind); }


}