#include <iostream>
#include <SFML/Graphics.hpp>
#include "Player.h"


using namespace std;
using namespace sf;


int main() {
    RenderWindow window(VideoMode(600, 600), "Space Invaders");
    window.setFramerateLimit(60);
    Texture spritesheet;
    if (!spritesheet.loadFromFile("spritesheet.png")) {
        cout << "Error loading spritesheet.png" << endl;
    };

    Player player(288, 555, spritesheet);

    while (window.isOpen()) {
        Event event;
        // Si el evento es del tipo cerrar evento -> cerramos ventana
        while (window.pollEvent(event)) {
            if (event.type==Event::Closed) window.close();
        }

        player.Update();
        window.clear(); // En cada frame limpiammos ventana
        window.draw(player);
        window.display(); // Mostramos ventana

    }

    return 0;
}