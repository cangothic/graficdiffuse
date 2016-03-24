#include "Director.h"

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
Director* Director::unicaInstancia=nullptr;
