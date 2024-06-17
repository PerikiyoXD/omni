//
// Created by pxd on 05/04/2024.
//

#include <SDL2/SDL.h>
#include <string>
#include <utility>

class SDLWindow {
public:
    SDLWindow(std::string title, int width, int height) :
            m_title(std::move(title)), m_width(width), m_height(height), m_window(nullptr), m_renderer(nullptr) {}

    ~SDLWindow() {
        SDL_DestroyRenderer(m_renderer);
        SDL_DestroyWindow(m_window);
        SDL_Quit();
    }

    bool init();

    SDL_Renderer *getRenderer() const;

    void clear() const;

    void present() const;

private:
    std::string m_title;
    int m_width;
    int m_height;
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
};

