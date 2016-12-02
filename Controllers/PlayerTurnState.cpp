#include <memory>
#include <SFML/Graphics.hpp>
#include "../Models/Board.hpp"
  
class PlayerTurnState : GameState{

    private :
        std::shared_ptr<Board> board_;
        BoardRenderer render_;
        int currentAction;
        //BoardController controller_; is its own controller

    public : 

        /*To avoid instanciating multiple Controllers and renderers for both Player and NPC turn state
        Also, Board is given as reference to allow for information sharing between the PlayerTurnState
        the NPCTurnState and the PauseState, so multiple state can access and eventually change data*/
        PlayerTurnState::PlayerTurnState(std::shared_ptr<Board> board, BoardRenderer render) : board_(board), render_(render){}

        bool PlayerTurnState::handleEvent(sf::Event e){
            
            switch(e.type){

                case sf::Event::KeyReleased :
                    switch(e.key.code){
                        case sf::Keyboard::1 :
                            controller_.useComp(1);
                            break;
                        case sf::Keyboard::2 :
                            controller_.useComp(2);
                            break;
                        case sf::Keyboard::3 :
                            controller_.useComp(3);
                            break;
                        case sf::Keyboard::4 :
                            controller_.useComp(4);
                            break;
                    }
                    break;

                case sf::Event::MouseButtonReleased :
                    switch(event.mouseButton.button){
                        case sf::Mouse::Right :
                            controller_.onClick();
                            break;

                        default : 
                            break;
                    }

                // on ne traite pas les autres types d'évènements
                default:
                    break;
            }

            return false;
        }

        void PlayerTurnState::useComp(int i){
            
        }

        void PlayerTurnState::update(double delta){
            controller_.update(delta);
        }

        void PlayerTurnState::render(sf::Window wind){
            renderer_.render(wind);
        }
};
