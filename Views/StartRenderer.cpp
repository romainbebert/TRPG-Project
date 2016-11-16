#include <SFML/Graphics.hpp>

class StartRenderer {
	private :
		sf::Font font;
		sf::Text text;


	public : 
		StartRenderer::StartRenderer(){
			if(!font.loadFromFile("arial.ttf"))
				std::cerr << "error finding font file";
			text.setFont(font);
			text.setCharacterSize(30);
			text.setStyle(sf::Text::Regular);
			text.setString("Press Enter or Space to start");
		} 

		Startrenderer::render(sf::Window wind){
			wind.draw(text);
		}
}