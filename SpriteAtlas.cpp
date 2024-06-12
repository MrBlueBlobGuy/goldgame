#include "SpriteAtlas.h"


namespace goldgame {

        SpriteAtlas::SpriteAtlas(const char *path, int offset_x, int offset_y, int width, int height) {
            this->m_offset_x = offset_x;
            this->m_offset_y = offset_y;
            this->m_width = width;
            this->m_height = height;
            this->m_texture = LoadTexture(path);
        }

        SpriteAtlas::~SpriteAtlas() {
            UnloadTexture(m_texture);
        }

        TextureAtlasSprite SpriteAtlas::RenderImageFromSpriteAtlas(TextureAtlasSprite texture_atlas_sprite) {
            texture_atlas_sprite.Render();
            return texture_atlas_sprite;
        }
} // goldgame