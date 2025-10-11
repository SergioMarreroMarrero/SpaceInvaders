//
// Created by oigre on 11/10/2025.
//

#ifndef SPACEINVADERS_BULLET_H
#define SPACEINVADERS_BULLET_H

#include <iostream>
#include <SFML/Graphics.hpp>


using namespace std;
using namespace sf;

class Bullet : public Drawable{
    private:
        Sprite sprite;
    public:
        Bullet(int x, int y, Texture &texture);
        virtual void draw(RenderTarget &rt,RenderStates rs) const;
};


#endif //SPACEINVADERS_BULLET_H


