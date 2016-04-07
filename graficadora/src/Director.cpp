#include "Director.h"

Director::Director(){
    iniciar_sdl();
    crear_pantalla(800,600,screen);
    cargar_datos("img.bmp",imagen);
}

Director::~Director(){
    delete unicaInstancia;
    SDL_Quit();
}
Director* Director::getInstance(){
    if(unicaInstancia == nullptr){
        unicaInstancia = new Director();
    }
    return unicaInstancia;
}
void Director::ciclo()
{
    while(true){
        SDL_Delay(150);
        escena->eventos();
        escena->actualizar();
        escena->dibujar();
        while ( SDL_PollEvent(&evento)){
            if(evento.type==SDL_QUIT){
                exit(0);
            }
        }
    }
}

void Director::cambiarEscena(string _idEscena)
{
    if(mapa.count(_idEscena)){
        escena = (mapa[_idEscena]);
    }else{
        cout<<"la escena no existe"<<endl;
    }

}

void Director::adicionarEscena(Escena* _escena)
{
    if(!mapa.count(_escena->idEscena)){
        mapa[_escena->idEscena] = _escena;
    }
}

Director* Director::unicaInstancia=nullptr;
