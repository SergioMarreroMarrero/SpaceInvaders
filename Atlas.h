//
// Created by oigre on 11/10/2025.
//

#ifndef SPACEINVADERS_ATLAS_H
#define SPACEINVADERS_ATLAS_H


#include <SFML/Graphics.hpp>
#include <vector>
using namespace sf;
using namespace std;



namespace Atlas {
    inline constexpr float kGlobalScale = 3.0f;
    inline constexpr int kSpritePixels  = 8;
    inline constexpr const char* kPath = "spritesheet.png";

    struct SpriteSection {
        int x, y, w, h;
        IntRect rect() const {return IntRect{x, y, w, h};}
    };

    // Sprites
    // Secciones de los sprites
    // Player
    inline constexpr SpriteSection kPlayerRect {
        14 *kSpritePixels,
        8  *kSpritePixels,
        2  *kSpritePixels,
        1  *(kSpritePixels-1) };


    // Bullet
    inline constexpr SpriteSection kBulletPlayerRect {
    15 *kSpritePixels,
    6 *(kSpritePixels) + (kSpritePixels-2),
    kSpritePixels ,
    kSpritePixels
    };
    }


#endif //SPACEINVADERS_ATLAS_H

