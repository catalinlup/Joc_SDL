#include <iostream>
#include "SDL.h"
using namespace std;

SDL_Window* window;
SDL_Renderer*renderer;
bool running(true);
int main(int argc,char*argv[])
{
    SDL_Init(SDL_INIT_EVERYTHING);
    window=SDL_CreateWindow("Joc",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,600,SDL_WINDOW_SHOWN);
    renderer=SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
    while(running){
        SDL_Event ev;
        SDL_PollEvent(&ev);
        if(ev.type==SDL_QUIT)
            running=false;

    }


    //SDL_Delay(5000);
    return 0;
}
