#pragma once

#include "raylib.h"

#include "Sprite.h"
#include "SpriteAtlas.h"
#include "Register.h"

#include <vector>

namespace goldgame {
     class Scene {
    public:
        Scene(int screen_width, int screen_height, const char* title);
        void render();

        virtual void update();
        virtual void start();
    private:
        int m_screen_width, m_screen_height;
        SpriteAtlas m_sprite_atlas = SpriteAtlas("resources/textureatlas1.png", 16, 16, 16, 16);

        std::vector<TextureAtlasSprite> m_sprites;
    };
} // goldgame