#include <SDL/SDL.H>
#include <string>
using namespace std;
void iniciar_sdl();

void crear_pantalla(int x, int y,SDL_Surface * &screen);

void cargar_datos(string direccionImagen,SDL_Surface * &_imagen);

void pintar_pantalla(int &_x,int &_y,SDL_Surface * &screen,SDL_Surface * &_imagen);
