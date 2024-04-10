#include "Niño.h"
using namespace std;

Niño::Niño(){};

Niño::Niño(std::string Nom2, int Edad, std::string Direccion, std::string Telefono){
    this->Nombre=Nom2;
    this->Edad=Edad;
    this->Direccion=Direccion;
    this->Telefono=Telefono;
};

void Niño::prestarObjeto(Objeto *objeto){
    objetosPrestados.insert(objeto);
};

void Niño::prestarObjeto(Objeto *objeto){
    objetosPrestados.erase(objeto);
};

std::set<string> Niño::ListarObjetosPrestados(){
    set<string> lista; //creo un set de strings para guardar la lista de objetos prestados

    //itero en el set de objetos prestados del niño
    for(Objeto* objeto : objetosPrestados){
        //por cada objeto prestado, inserto en la lista
        lista.insert(objeto->toString());
    };
    //retorno la lista
    return lista;
};

std::string Niño::getNombre(){
    return Nombre;
}