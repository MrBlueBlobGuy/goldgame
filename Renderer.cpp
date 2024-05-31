#include "Renderer.h"

namespace goldgame {
    Renderer::Renderer(int screen_width, int screen_height, const char *title) {
        this->m_screen_width = screen_width;
        this->m_screen_height = screen_height;
    }

    int p_x = 0, p_y = 0;

    void Renderer::render() {
        m_sprite_atlas.RenderImageFromSpriteAtlas(0, 0, p_x, p_y, 2);

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
    }
} // goldgame