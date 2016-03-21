#include <SDL/SDL.H>
#include <string>
using namespace std;
void iniciar_sdl();
/* inicia el mudulo de video sdl */
void crear_pantalla(int x, int y,SDL_Surface * &screen);
/*crea una pantalla de x*y y la guarda en la variable screen*/
void cargar_datos(string direccionImagen,SDL_Surface * &_imagen);
/*carga la imagen de la variable direccionImagen en la variable_imagen*/
void pintar_pantalla(int _x,int &_y,SDL_Surface * &screen,SDL_Surface * &_imagen);
/*pinta la imagen en la ventana screen*/
