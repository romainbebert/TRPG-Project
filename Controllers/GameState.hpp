#include <SFML/Graphics.hpp>

class Engine;

virtual class GameState{

	private : 
		Engine engine_;

	public :
		GameState::GameState(Engine engine);
		virtual bool GameState::handleEvent(sf::Event e);
		virtual void GameState::update(double delta) = 0;
		virtual void GameState::render(){ renderer_.render(); }

};
