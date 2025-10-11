//
// Created by oigre on 11/10/2025.
//

#include "Bullet.h"



Bullet::Bullet(int x, int y, Texture &texture) {
    sprite.setTexture(texture);
    sprite.setTextureRect(IntRect(13*8+8, 7*8+7, 16, 8));
    sprite.setPosition(x, y);
    sprite.setScale(3, 3);
};

void Bullet::draw(RenderTarget &rt,RenderStates rs) const {

};


/*
Player::Player(int x, int y, Texture &texture) {
    sprite.setTexture(texture); // le seteamos la textura
    sprite.setTextureRect(IntRect(13*8+8, 7*8+7, 16, 8)); // le decimos que seccion de la textura usar
    //sprite.setTextureRect(RectangleShape({13*8+8, 7*8+7})); // le decimos que seccion de la textura usar
    sprite.setPosition(x, y); // le asignamos la posicion
    sprite.setScale(3, 3); // le metemos escala (el cuadrito que pilles multiplicalo por 3)
    vida=100;
    vel=5;
};


void Player::draw(RenderTarget &rt, RenderStates rs) const {
    rt.draw(sprite, rs);
}
*/