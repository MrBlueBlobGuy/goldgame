#include <iostream>
#include "Scene.h"

namespace goldgame {
    Scene::Scene(int screen_width, int screen_height, const char *title){
        this->m_screen_width = screen_width;
        this->m_screen_height = screen_height;
    }

    void Scene::update() {
        std::cout << "Update function not implemented" << std::endl;
    }

    void Scene::start() {
        std::cout << "start function not implemented" << std::endl;
    }
} // goldgame