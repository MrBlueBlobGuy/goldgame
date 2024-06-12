#include <iostream>
#include "TestScene.h"


namespace goldgame::gamescenes {

    float p_x = 0, p_y = 0;

    TestScene::TestScene(int screen_width, int screen_height, const char *title) : Scene(screen_width, screen_height, title) {

    }

    void TestScene::update() {
        Sprite.Render();
        if (IsKeyDown(KEY_RIGHT)) {
            p_x += 2;
        }
        if (IsKeyDown(KEY_LEFT)) {
            p_x -= 2;
        }
        if (IsKeyDown(KEY_UP)) {
            p_y -= 2;
        }
        if (IsKeyDown(KEY_DOWN)) {
            p_y += 2;
        }
        Sprite.x = p_x;
        Sprite.y = p_y;
    }

    void TestScene::start() {
        Sprite = {m_sprite_atlas,
                  16, 16,
                  16, 16,
                  1, 0,
                  3, 3,
                  3};
    }
} // gamescenes
// goldgame