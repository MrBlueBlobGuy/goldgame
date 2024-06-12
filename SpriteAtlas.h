#pragma once

#include "raylib.h"
#include "TextureAtlasSprite.h"


namespace goldgame {
    class SpriteAtlas {
    public:
        SpriteAtlas(const char* path, int offset_x, int offset_y, int width, int height);
        ~SpriteAtlas();

        TextureAtlasSprite RenderImageFromSpriteAtlas(TextureAtlasSprite);

    private:
        Texture2D m_texture;
        int m_offset_x, m_offset_y, m_width, m_height;
    };
}