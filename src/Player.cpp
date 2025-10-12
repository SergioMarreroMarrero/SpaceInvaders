//
// Created by oigre on 09/10/2025.
//

#include "../include/Player.h"
#include "../include/Atlas.h"




Player::Player(int x, int y, Texture &texture, IntRect rect) {
    sprite.setTexture(texture);
    sprite.setTextureRect(rect);
    sprite.setPosition(x, y); // le asignamos la posicion
    sprite.setScale(Atlas::kGlobalScale, Atlas::kGlobalScale); // le metemos escala (el cuadrito que pilles multiplicalo por 3)
    vida=100;
    vel=5;
}


void Player::draw(RenderTarget &rt, RenderStates rs) const {
    rt.draw(sprite, rs);
}

void Player::Update() {
    if(Keyboard::isKeyPressed(Keyboard::Right) &&
        (sprite.getPosition().x+static_cast<float>(vel)) < 552)
        sprite.move(static_cast<float>(vel), 0);
    if(Keyboard::isKeyPressed(Keyboard::Left) &&
        (sprite.getPosition().x+static_cast<float>(vel)) > 10)
        sprite.move(static_cast<float>(vel*-1.0), 0);
    if(Keyboard::isKeyPressed(Keyboard::Up)
        && (sprite.getPosition().y+static_cast<float>(vel)) > 400)
        sprite.move(0, static_cast<float>(vel*-1.0));
    if(Keyboard::isKeyPressed(Keyboard::Down)
        && (sprite.getPosition().y+static_cast<float>(vel)) < 550)
        sprite.move(0, static_cast<float>(vel*1.0));

    //cout << sprite.getPosition().y << endl;
};

