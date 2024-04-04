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
std::string toString(){
    return "JuegoMesa: " + this->Nombre + ", "+ (this->AnioComprado)+ ", " +(this->Estado)+ ", "+ this->EdadRecomendada +", "+(this->CantJugadores);
};
