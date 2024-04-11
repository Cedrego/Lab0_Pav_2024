using namespace std;
#include "JuegoMesa.h"
#include "Objeto.h"
#include <iostream>

std::string JuegoMesa::toString() const{
	//es una sola linea, escrita asi para que sea comodo de leer
	return "Libro: " + Nom + ", " 
		+ std::to_string(AnioComprado) + ", " //to_string() != toString()
		+ std::to_string(Estado) + ", "       //to_string() es parte de std
		+ std::to_string(EdadRecomendada) + ", " 
		+ std::to_string(CantJugadores);
};
JuegoMesa::JuegoMesa(){};
JuegoMesa::JuegoMesa(std::string NomO,int AnioCompradoO,ESTADO EstadoO,int CantJugadoresO,int EdadRecomendadaO){
	this->Nom=NomO;
	this->AnioComprado=AnioCompradoO;
	this->Estado=EstadoO;
    this->CantJugadores=CantJugadoresO;
    this->EdadRecomendada=EdadRecomendadaO;
};
JuegoMesa::~JuegoMesa(){};


