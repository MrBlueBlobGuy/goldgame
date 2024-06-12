#include <stdexcept>
#include "Register.h"

namespace goldgame {
    template<typename T>
    void Register<T>::RegisterObject(const std::string& name, T object) {
        m_register[name] = object;
    }

    template<typename T>
    T Register<T>::GetObject(const std::string name) {
        if (m_register.find(name) == m_register.end()) {
            throw std::runtime_error("Object not found in register");
        }
        return m_register[name];
    }

    template<typename T>
    void Register<T>::DeRegisterObject(const std::string& name) {
        if (m_register.find(name) == m_register.end()) {
            throw std::runtime_error("Object not found in register");
        }
        m_register.erase(name);
    }

    template<typename T>
    std::vector<T> Register<T>::GetObjects() {
        std::vector<T> objects;
        for (auto& object : m_register) {
            objects.push_back(object.second);
        }
        return objects;
    }
} // goldgame