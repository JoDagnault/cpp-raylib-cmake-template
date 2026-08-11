#include "raylib.h"

int main() {
  constexpr int screenWidth = 1200;
  constexpr int screenHeight = 800;

  InitWindow(screenWidth, screenHeight, "Raylib C++ Template");

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(BLACK);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
