#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    // Load a sprite to display
    window.setFramerateLimit(60);
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
            engine.handleEvent(event);
        }
        // Clear screen
        window.clear();
        engine.update();
        engine.render(window);
        // Update the window
        window.display();
    }
    return EXIT_SUCCESS;
}