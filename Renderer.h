#pragma once

#include "raylib.h"
#include "Sprite.h"
#include "SpriteAtlas.h"
#include "Scene.h"

#include "GameScenes/TestScene.h"

#include <vector>

namespace goldgame {
    class Renderer {
    public:
        Renderer(int screen_width, int screen_height, const char* title);
        ~Renderer();
        void render();
    private:
        int m_screen_width, m_screen_height;
        // SCENES BREAK IF IT IS STACK ALLOCATED DO NOT CHANGE UNLESS YOU KNOW WHAT YOU ARE DOING
        Scene* m_scene = new gamescenes::TestScene(m_screen_width, m_screen_height, "Test Scene");
    };
} // goldgame