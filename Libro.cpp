#include "Libro.h"
#include <iostream>
using namespace std;

std::string Libro::toString() const{
	return "Libro: " + Nom + ", " 
		+ std::to_string(AnioComprado) + ", " //to_string() != toString()
		+ std::to_string(Estado) + ", "       //to_string() es parte de std
		+ Autor + ", " 
		+ std::to_string(CantPaginas);
}; 

Libro::Libro(){};
Libro::Libro(std::string NomO,int AnioCompradoO,ESTADO EstadoO,int CantPaginasO,std::string AutorO){
	this->Nom=NomO;
	this->AnioComprado=AnioCompradoO;
	this->Estado=EstadoO;
    this->CantPaginas=CantPaginasO;
    this->Autor=AutorO;
};
Libro::~Libro(){};

