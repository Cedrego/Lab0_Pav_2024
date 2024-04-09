using namespace std;
#include "JuegoMesa.h"
#include "Objeto.h"
#include <iostream>
JuegoMesa::JuegoMesa(){};
JuegoMesa::JuegoMesa(std::string Nom,int AnioComprado,ESTADO Estado,int CantJugadores,int EdadRecomendada){
    Objeto(Nom,AnioComprado,Estado);
    this->CantJugadores=CantJugadores;
    this->EdadRecomendada=EdadRecomendada;
};
JuegoMesa::~JuegoMesa(){};
 std::string JuegoMesa::toString(){
    return "Libro: " + Nom + ", " 
    + std::to_string(AnioComprado) + ", " //to_string() != toString()
    + std::to_string(Estado) + ", "       //to_string() es parte de std
    + std::to_string(EdadRecomendada) + ", " 
    + std::to_string(CantJugadores);
};