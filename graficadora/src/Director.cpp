#include "Director.h"

Director::Director(){
    crear_pantalla(800,600,screen);
    cargar_datos("img.bmp",imagen);
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
        escena.eventos();
        escena.actualizar();
        escena.dibujar();
        while ( SDL_PollEvent(&evento)){
            if(evento.type==SDL_QUIT){
                exit(0);
            }
        }
    }
}

void Director::cambiarEscena(string escena)
{

}
void Director::adicionarEscena(Escena _escena)
{

}

Director* Director::unicaInstancia=nullptr;
