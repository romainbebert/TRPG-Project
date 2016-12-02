#include <iostream> 
#include <SFML/Audio.hpp> 
#include <SFML/Graphics.hpp> 
#include "Controllers/GameState.hpp"

 
int main(){ 
 
  sf::VideoMode desk = sf::VideoMode::getDesktopMode(); 
  sf::RenderWindow wind(desk, "test"); 
  sf::Font font; sf::Text text; 
 
  if(!font.loadFromFile("arial.ttf")) 
    std::cerr << "error finding font file"; 
  text.setFont(font); 
  text.setCharacterSize(30); 
  text.setStyle(sf::Text::Regular); 
  text.setString("Press Enter or Space to start"); 
 
  while (wind.isOpen()){ 
    sf::Event eve; 
    while (wind.pollEvent(eve)){ 
      if (eve.type == sf::Event::Closed) 
                wind.close(); 
        } 
        // Clear screen 
        wind.clear(); 
        // Draw the string 
        wind.draw(text); 
        // Update the window 
        wind.display(); 
     
  } 
}
