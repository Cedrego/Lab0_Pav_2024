#include "ESTADO.h"
#include <iostream>
#include <string>
using namespace std;

class Objeto{
    private:
        std::string nombreObjeto;
        int anioCompra;
        ESTADO estadoObjeto; //enum definido en ESTADO.h
    public: 
        Objeto::Objeto(); //constructor sin parametros
        Objeto::Objeto(std::string nombreObjeto, int anioCompra, ESTADO estadoObjeto); //constructor con parametros
        Objeto::~Objeto();

};