//
// Created by oigre on 11/10/2025.
//

#include "../include/Bullet.h"
#include "../include/Atlas.h"



Bullet::Bullet(int x, int y, Texture &texture, IntRect rect, int v) {
    sprite.setTexture(texture);
    sprite.setTextureRect(rect);
    sprite.setPosition(x, y);
    sprite.setScale(Atlas::kGlobalScale, Atlas::kGlobalScale);
    vel=v;
};


void Bullet::draw(RenderTarget &rt,RenderStates rs) const {
    rt.draw(sprite, rs);
};

void Bullet::Update() {
    sprite.move(0, static_cast<float>(vel));
};


/*
void Bullet::Update(){

};
*/

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