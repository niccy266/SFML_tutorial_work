/** SFML window tutorial
 *  Following tutorial at https://www.sfml-dev.org/tutorials/2.5/window-window.php
 *  Nicolas Concha May 2023
 */

#include <iostream>
#include <SFML/Window.hpp>

int main(int, char**) {

    sf::Window window;
    window.create(sf::VideoMode(800, 600), "My window");

    /*
    // Display the list of all the video modes available for fullscreen
    std::vector<sf::VideoMode> modes = sf::VideoMode::getFullscreenModes();
    for (std::size_t i = 0; i < modes.size(); ++i)
    {
        sf::VideoMode mode = modes[i];
        std::cout << "Mode #" << i << ": "
                << mode.width << "x" << mode.height << " - "
                << mode.bitsPerPixel << " bpp" << std::endl;
    }
    // Create a window with the same pixel depth as the desktop
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();

    window.create(sf::VideoMode(1024, 768, desktop.bitsPerPixel), "SFML window");
    */

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}
