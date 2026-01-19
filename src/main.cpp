#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "EngineConfig.hpp"
#include "GameEngine.hpp"
#include <iostream>

int main() {
    EngineConfig config("GameEnginge", 800,600,false);

    GameEngine engine(config);
    engine.run();

    return 0;
}