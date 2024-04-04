#include "Objeto.h"
#include "Niño.h"
#include <string>

using namespace prestado;
Niño::Niño(std::string Nom2, int Edad, std::string Direccion,std::string Telefono){
    this-Nombre=Nom2;
    this->Edad=Edad;
    this->Direccion=Direccion;
    this->Telefono=Telefono;
};
 /*no me acuerdo cual era xD "¿ Eres el Niño: " + this->Nombre + ", "+ (this->Edad)+ ", " +(this->Direccion)+ ", "+ (this->Telefono) ?";
 en caso de no ser, pregunta si quiere arreglar la informacion o salir
 si es va a poner el objeto*/
 //bool verdadero(true){
Objeto::Objeto(std::string Nom,int AnioComprado,ESTADO Estado){
    this->Nombre=Nom;
    this->AnioComprado=AnioComprado;
    this->Estado=Estado;
};
 // "¿Quieres el Objeto: " + this->Nombre + ", "+ (this->AnioComprado)+ ", " +(this->Estado) ?");
};
/*otro bool aca por si no lo quiere o si lo quiere
 bool verdadero(false) o (true);
}
para bool true
une el objeto al niño
return "disfrute su prestamo";
para bool false
return "Prestamo cancelado"*/