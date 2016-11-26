#include <SFML/Graphics.hpp>

class PressStartState : GameState {
	
	private :
		Engine engine_;
		StartRenderer render_;

	public :
		PressStartState::PressStartState(Engine engine, StartRenderer render_) : engine_(engine) { render_ = StartRenderer(); }

		PressStartState::~PressStartState(){}

		PressStartState::handleEvent(sf::Event e){
			if(e.type == sf::Event::KeyReleased){
				switch(e.key.code){
					case sf::Keyboard::Space :
					case sf::Keyboard::Return : 
						//engine_.changeStateSelect();
						break;
					
					default : 
						break;
				}
			}
		}

		//No controller in Press Start atm, because no other logic needed than changing state
		PressStartState::update(double delta){}

		PressStartState::render(sf::Window wind){ render_.render(wind); }


}