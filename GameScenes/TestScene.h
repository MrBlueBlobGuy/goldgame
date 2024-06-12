#pragma once

#include "Scene.h"
#include "Register.h"

namespace goldgame::gamescenes {
    class TestScene : public Scene {
    public:
        TestScene(int screen_width, int screen_height, const char *title);
        void update() override;
        void start() override;

    private:
        Texture2D m_sprite_atlas = LoadTexture("Resources/textureatlas1.png");
        TextureAtlasSprite Sprite;
    };
}