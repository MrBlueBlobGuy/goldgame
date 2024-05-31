#pragma once

#include "raylib.h"
#include "Sprite.h"
#include "SpriteAtlas.h"

#include <vector>

namespace goldgame {
    class Renderer {
    public:
        Renderer(int screen_width, int screen_height, const char* title);
        void render();
    private:
        int m_screen_width, m_screen_height;
        SpriteAtlas m_sprite_atlas = SpriteAtlas("resources/textureatlas1.png", 16, 16, 16, 16);
    };
} // goldgame