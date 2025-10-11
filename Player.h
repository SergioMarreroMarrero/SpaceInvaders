//
// Created by oigre on 09/10/2025.
//

#ifndef SPACEINVADERS_PLAYER_H
#define SPACEINVADERS_PLAYER_H

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Player : public Drawable{

    private:
        Sprite sprite;
        int vida;
        int vel;

    public:
        Player();
        Player(int x, int y, Texture &texture, IntRect &rect);
        virtual void draw(RenderTarget &rt,RenderStates rs) const;
        void Update();

};


#endif //SPACEINVADERS_PLAYER_H