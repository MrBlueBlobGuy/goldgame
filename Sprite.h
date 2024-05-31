#pragma once

#include "raylib.h"

namespace goldgame {
    class Sprite {
    public:
        Sprite(const char* path, float _x, float _y);
        ~Sprite();
        void GG_DrawSprite();
        float x,y;
    private:
        Texture2D m_texture;
    };
} // goldgame