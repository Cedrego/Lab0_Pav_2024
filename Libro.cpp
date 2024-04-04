using namespace std;
#include "Libro.h"
#include <iostream>
Libro::Libro(){};
Libro::Libro(std::string Nom,int AnioComprado,ESTADO Estado,int CantPaginas,std::string Autor){
    Objeto(Nom,AnioComprado,Estado);
    this->CantPaginas=CantPaginas;
    this->Autor=Autor;
};
Libro::~Libro(){};
std::string toString(){
    return "Libro: " + this->Nom + ", "+ (this->AnioComprado)+ ", " +(this->Estado)+ ", "+ this->Autor +", "+(this->CantPaginas);
};