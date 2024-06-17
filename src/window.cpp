//
// Created by pxd on 05/04/2024.
//

#include "window.h"

bool SDLWindow::init() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        // Handle initialization error
        return false;
    }

    m_window = SDL_CreateWindow(m_title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, m_width, m_height,
                                SDL_WINDOW_SHOWN);
    if (!m_window) {
        // Handle window creation error
        return false;
    }

    m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_ACCELERATED);
    if (!m_renderer) {
        // Handle renderer creation error
        return false;
    }

    return true;
}

SDL_Renderer *SDLWindow::getRenderer() const {
    return m_renderer;
}

void SDLWindow::clear() const {
    SDL_RenderClear(m_renderer);
}

void SDLWindow::present() const {
    SDL_RenderPresent(m_renderer);
}
