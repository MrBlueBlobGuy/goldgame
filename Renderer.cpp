#include "Renderer.h"

namespace goldgame {
    Renderer::Renderer(int screen_width, int screen_height, const char *title) {
        this->m_screen_width = screen_width;
        this->m_screen_height = screen_height;

        // Initialize Scene
        m_scene->start();
    }


    void Renderer::render() {
        m_scene->update();
    }

    Renderer::~Renderer(){
        delete m_scene;
    }
} // goldgame