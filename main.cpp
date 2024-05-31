#include <iostream>
#include "raylib.h"
#include "Renderer.h"


int main(){
    const int screen_width = 800;
    const int screen_height = 450;

    InitWindow(screen_width, screen_height, "goldgame");
    InitAudioDevice();

    goldgame::Renderer renderer(screen_width, screen_height, "goldgame");
    std::cout<<GetWorkingDirectory();

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);
        renderer.render();
        EndDrawing();
    }

    CloseAudioDevice();
    CloseWindow();

    return 0;
}