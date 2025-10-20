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

Vector2f Bullet::Pos() {
    return sprite.getPosition();
};


void Bullet::draw(RenderTarget &rt,RenderStates rs) const {
    rt.draw(sprite, rs);
};

void Bullet::Update() {
    sprite.move(0, static_cast<float>(vel));
};



