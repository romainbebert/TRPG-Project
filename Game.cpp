#include <iostream> 
#include "sfml/include/SFML/Audio.hpp"
#include "sfml/include/SFML/Graphics.hpp" 
#include "Controllers/Engine.cpp"
 
sf::RenderWindow wind(sf::VideoMode::getDesktopMode(),"test");

int main(){ 
 
  wind.setFramerateLimit(60);
  /*sf::VideoMode desk = sf::VideoMode::getDesktopMode(); 
  sf::RenderWindow wind(desk, "test"); 
  sf::Font font; sf::Text text; 
 
  if(!font.loadFromFile("steelfish.ttf")) 
    std::cerr << "error finding font file"; 
  text.setFont(font); 
  text.setColor(sf::Color::red);
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
        wind.draw(text); */
  StartRenderer eng;
  while(wind.isOpen()){

    eng.render();
        // Update the window 
        wind.display(); 
     
  } 
}
