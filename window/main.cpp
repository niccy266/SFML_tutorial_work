/** SFML window tutorial
 *  Following tutorial at https://www.sfml-dev.org/tutorials/2.5/window-window.php
 *  Nicolas Concha May 2023
 */

#include <iostream>
#include <SFML/Window.hpp>

int main(int, char**) {
    sf::Window window(sf::VideoMode(800, 600), "Hello World");

    // wait for something to happen before closing window

    return 0;
}
