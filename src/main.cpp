#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include "../include/Player.h"
#include "../include/Atlas.h"
#include "../include/Bullet.h"


using namespace std;
using namespace sf;


int main() {

    vector<Bullet> bulletsPlayer;
    RenderWindow window(VideoMode(600, 600), "Space Invaders");
    window.setFramerateLimit(60);
    Texture spritesheet;
    if (!spritesheet.loadFromFile(Atlas::kPathToSpriteSheet)) {
        cout << "Error loading spritesheet.png" << endl;
    };

    Player player(288, 555, spritesheet, Atlas::kPlayerRect.rect());

    //Bullet bullet(288, 250, spritesheet, Atlas::kBulletPlayerRect.rect(), -5);


    while (window.isOpen()) {
        Event event;
        // Si el evento es del tipo cerrar evento -> cerramos ventana
        while (window.pollEvent(event)) {
            if (event.type==Event::Closed) window.close();
        }

        /*Dentro del player necesitamos saber si se ha pulsado el espacio.
         *Si esto es asi, entonces en el main instanciamos una bala*/

        player.Update();
        if (player.Shoot()&&bulletsPlayer.size()==0) {
            int x_bullet, y_bullet;
            x_bullet = player.Pos().x+Atlas::kSpritePixels*Atlas::kGlobalScale;
            y_bullet = player.Pos().y-Atlas::kSpritePixels*Atlas::kGlobalScale;
            Bullet bullet(x_bullet, y_bullet, spritesheet, Atlas::kBulletPlayerRect.rect(), -5);
            bulletsPlayer.push_back(bullet);

        }

        if(bulletsPlayer.size()>0) {
            if (bulletsPlayer.at(0).Pos().y < -Atlas::kSpritePixels*Atlas::kGlobalScale) {
                cout << Atlas::kSpritePixels*Atlas::kGlobalScale << endl;
                bulletsPlayer.erase(bulletsPlayer.begin());
            };
        }

        //bullet.Update();
        window.clear(); // En cada frame limpiammos ventana
        window.draw(player);
        for (auto &bullet : bulletsPlayer) {
            bullet.Update();
            window.draw(bullet);
        }

        window.display(); // Mostramos ventana

    }

    return 0;
}