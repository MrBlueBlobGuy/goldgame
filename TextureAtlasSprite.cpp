#include "TextureAtlasSprite.h"

namespace goldgame {
    void TextureAtlasSprite::Render() {
        Rectangle sourceRec = { (float)(offset_x * index_x), (float)(offset_y * index_y), (float)width, (float)height };
        Rectangle destRec = { x, y, (float)width*scale, (float)height*scale };
        DrawTexturePro(texture, sourceRec, destRec, { 0, 0 }, 0, WHITE);
    }
} // goldgame
