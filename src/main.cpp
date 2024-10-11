#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
    // Create a window object with the size of 800x600 and a name "Test Window"
    sf::Window window(sf::VideoMode(800, 600), "Test Window");

    // While the window is open, keep the window open
    while(window.isOpen()){
        // Create an event listener
        sf::Event event;
        // While window is listening to an event
        while(window.pollEvent(event)){
            // If the event type is equal to closed
            if(event.type == sf::Event::Closed){
                // Close the window
                window.close();
            }
        }
    }

    return 0;
}