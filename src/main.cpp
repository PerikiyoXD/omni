#include "window.h"

int main(int argc, char *argv[]) {
    const std::string windowTitle = "Omni Engine";
    const int windowWidth = 800;
    const int windowHeight = 600;

    SDLWindow window(windowTitle, windowWidth, windowHeight);
    if (!window.init()) {
        // Handle initialization failure
        return 1;
    }

    // Main loop
    bool quit = false;
    while (!quit) {
        SDL_Event e;
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        window.clear(); // Clear the window
        // Your rendering code goes here
        window.present(); // Present the rendered frame
    }

    return 0;
}
