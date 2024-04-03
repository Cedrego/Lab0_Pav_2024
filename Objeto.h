#include <iostream>
#include <string>
using namespace std;

class Objeto{
    private:
        std::string nombreObjeto;
        int anioCompra;
        Estado estadoObjeto; //enum definido en ESTADO.h
    public: 
        Objeto::Objeto(); //constructor sin parametros
        Objeto::Objeto(std::string nombreObjeto, int anioCompra, Estado estadoObjeto); //constructor con parametros
        Objeto::~Objeto();

};