#pragma once
#include <string>

struct EngineConfig {
    std::string title;

    unsigned int width;
    unsigned int height;
    bool fullscreen;
    EngineConfig() {};
    EngineConfig(std::string _title, unsigned int _width, unsigned int _height, bool _fullscreen)
        : title(_title), width(_width), height(_height), fullscreen(_fullscreen){}
    
};