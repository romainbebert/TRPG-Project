#include <memory>
//#include "../Models/Board.hpp"
#include "GameState.hpp"
#include "PressStartState.cpp"

class Engine {

	private :
		//Board _board

		//States initialization 
		GameState 		_state;
		PressStartState _start;
		/*SelectPosState 	_select;
		PlayerTurnState _plturn;
		NPCTurnState 	_npturn;
		PauseState 		_pause;
		GameOverState 	_gameover;*/
	
	public :
		Engine::Engine() {
			//Board _board();
			PressStartState _start(this);
			/*SelectPosState 	_select(std::share_ptr(new _board));
			PlayerTurnState _plturn(std::share_ptr(new _board));
			NPCTurnState 	_npturn(std::share_ptr(new _board));
			PauseState 		_pause(std::share_ptr(new _board));
			GameOverState 	_gameover();*/
			
		}

		Engine::~Engine(){}
		
		boolean Engine::handleEvent(sf::Event e) {
			_state.handleEvent(sf::Event e);
		}
		
		void Engine::update() {
			_state.update();
		}
		
		void Engine::render() {
			_state.render();
		}
	
	protected :
		void Engine::ChangeStateStart()		{ _state=_start; }
		/*void Engine::ChangeStateSelect()	{ _state=_select; }
		void Engine::ChangeStatePlTurn()	{ _state=_plturn; }
		void Engine::ChangeStateNPTurn()	{ _state=_npturn; }
		void Engine::ChangeStatePause()		{ _state=_pause; }
		void Engine::ChangeStateGameOver()	{ _state=_gameover; }*/
};