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
        int vel;
    public:
        Bullet(int x, int y, Texture &texture, IntRect rect, int v);
        virtual void draw(RenderTarget &rt,RenderStates rs) const;
        void Update();
        Vector2f Pos();
};


#endif //SPACEINVADERS_BULLET_H


