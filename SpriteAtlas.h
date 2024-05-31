#pragma once

#include "raylib.h"

namespace goldgame {
    class SpriteAtlas {
    public:
        SpriteAtlas(const char* path, int offset_x, int offset_y, int width, int height);
        ~SpriteAtlas();

        void RenderImageFromSpriteAtlas(int index_x, int index_y, float x, float y, float scale);

    private:
        Texture2D m_texture;
        int m_offset_x, m_offset_y, m_width, m_height;
    };
}