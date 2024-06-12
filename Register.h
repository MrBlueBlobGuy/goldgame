#pragma once

#include <unordered_map>
#include <string>
#include <vector>

namespace goldgame{
    template<typename T>
    class Register {
    public:
        void RegisterObject(const std::string& name, T object);
        T GetObject(const std::string name);
        void DeRegisterObject(const std::string& name);
        std::vector<T> GetObjects();
    private:
        std::unordered_map<std::string, T> m_register;
    };
}
