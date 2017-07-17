#include <iostream>
#include<SDL2/SDL.h>

using namespace std;

SDL_Window* window;

int main(int argc,char*argv[])
{
    SDL_Init(SDL_INIT_EVERYTHING);
    window=SDL_CreateWindow("Joc",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,600,SDL_WINDOW_SHOWN);
    //renderer=SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
    SDL_Delay(5000);
    return 0;
}
