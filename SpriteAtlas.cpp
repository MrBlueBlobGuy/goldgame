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

        void SpriteAtlas::RenderImageFromSpriteAtlas(int index_x, int index_y, float x, float y, float scale=1) {
            Rectangle sourceRec = { (float)(m_offset_x * index_x), (float)(m_offset_y * index_y), (float)m_width, (float)m_height };
            Rectangle destRec = { x, y, (float)m_width*scale, (float)m_height*scale };
            DrawTexturePro(m_texture, sourceRec, destRec, { 0, 0 }, 0, WHITE);
        }
} // goldgame