#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "EngineConfig.hpp"

class GameEngine {
public:
    GameEngine(EngineConfig _config) {};
    void run();
private:
    
};