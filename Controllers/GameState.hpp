class Renderer;
class Engine;

virtual class GameState{

	private : 
		Engine* engine_;
		Renderer renderer_;

	public :
		GameState::GameState(Engine* engine, Renderer render);
		virtual bool GameState::handleEvent(sf::Event e);
		virtual void GameState::update(){};
		virtual void GameState::render(){ renderer_.render(); }

};
