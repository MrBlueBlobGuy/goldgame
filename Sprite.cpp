#include "Sprite.h"

namespace goldgame {

    Sprite::Sprite(const char *path, float _x, float _y) {
        this->x = _x;
        this->y = _y;
        this->m_texture = LoadTexture(path);
    }

    Sprite::~Sprite() {
        UnloadTexture(m_texture);
    }

    void Sprite::GG_DrawSprite() {
        DrawTexture(m_texture, x, y, WHITE);
    }
} // goldgame