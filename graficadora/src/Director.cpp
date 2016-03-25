#include "Director.h"
#include <SDL/SDL.H>
Director::Director(){
    //ctor
}

Director::~Director(){
    delete unicaInstancia;
}
Director* Director::getInstance(){
    if(unicaInstancia == nullptr){
        unicaInstancia = new Director();
    }
    return unicaInstancia;
}
void Director::ciclo()
{
    SDL_Event evento;
    while(true){
        while ( SDL_PollEvent(&evento)){
            if(evento.type==SDL_QUIT){
                exit(0);
            }
        }
        escena.eventos();
        escena.actualizar();
        escena.dibujar();
    }
}

void Director::cambiarEscena(Escena escena)
{

}

Director* Director::unicaInstancia=nullptr;
