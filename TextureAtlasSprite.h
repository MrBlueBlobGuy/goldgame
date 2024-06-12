#pragma once

#include "raylib.h"

namespace goldgame{
    struct TextureAtlasSprite {
        Texture2D texture;
        int offset_x, offset_y, width, height, index_x, index_y;
        float x, y, scale;

        void Render();
    };

}