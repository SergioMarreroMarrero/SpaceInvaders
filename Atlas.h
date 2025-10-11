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
        IntRect rect() const {return IntRect{x*kSpritePixels, y*kSpritePixels, w*kSpritePixels, h*(kSpritePixels-1)};}
    };

    // Sprites
    // Secciones de los sprites
    inline constexpr SpriteSection kPlayerRect {
        14,
        8,
        2,
        1 };
    }



#endif //SPACEINVADERS_ATLAS_H

