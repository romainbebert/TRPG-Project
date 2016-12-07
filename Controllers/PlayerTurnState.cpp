#include <memory>
#include <SFML/Graphics.hpp>
#include "../Models/Board.hpp"
  
class PlayerTurnState : GameState{

    private :
        std::shared_ptr<Board> board_;
        BoardRenderer render_;
        int currentAction;
        float targetX, targetY;
        bool inAction = false;
        //BoardController controller_; is its own controller

    public : 

        /*To avoid instanciating multiple Controllers and renderers for both Player and NPC turn state
        Also, Board is given as reference to allow for information sharing between the PlayerTurnState
        the NPCTurnState and the PauseState, so multiple state can access and eventually change data*/
        PlayerTurnState::PlayerTurnState(std::shared_ptr<Board> board) : board_(board){render_=new BoardRenderer(board_);}

        bool PlayerTurnState::handleEvent(sf::Event e){
            
            switch(e.type){

                case sf::Event::KeyReleased :
                    switch(e.key.code){
                        case sf::Keyboard::1 :
                            this.setComp(1);
                            break;
                        case sf::Keyboard::2 :
                            this.setComp(2);
                            break;
                        case sf::Keyboard::3 :
                            this.setComp(3);
                            break;
                        case sf::Keyboard::4 :
                            this.setComp(4);
                            break;
                    }
                    break;

                case sf::Event::MouseButtonReleased :
                    switch(event.mouseButton.button){
                        case sf::Mouse::Right :
                            this.onClick(sf::Mouse::getPosition(wind).x,sf::Mouse::getPosition(wind).y);
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

        void PlayerTurnState::setComp(int i){
            currentAction=i;
        }

        void onClick(int x, int y){
            targetX = x/32;
            targetY = y/32;
            switch(currentAction){
                case 1 : //move
                    if(board_.getGrid()[(int) targetX][(int) targetY].getChar() == null){
                        inAction=true;
                    }
                    break;
                case 2 : //attaque
            }
        }

        void PlayerTurnState::update(){
            
        }

        void PlayerTurnState::render(){
            renderer_.render();
        }
};
