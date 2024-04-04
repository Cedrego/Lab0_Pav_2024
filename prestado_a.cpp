#include "Objeto.h"
#include "Niño.h"
#include <string>
#include <iostream>
bool verdadero(false);
string respuesta;
using namespace std;
Niño::Niño(){};
Niño::Niño(std::string Nom2, int Edad, std::string Direccion,std::string Telefono){
    this->Nombre=Nom2;
    this->Edad=Edad;
    this->Direccion=Direccion;
    this->Telefono=Telefono;
};
cout <<"¿ Eres el Niño: "<< Nom2<< " - "<<Edad<<" - "<< Direccion <<" - " << Telefono <</n <<"   ¿ Y - N ?";
cin >> respuesta;
if(respuesta=='N'){
    return "Niño no encontrado";
}else{if(respuesta=='Y'){
    verdadero=true;
}else{return "Error"; }
};
 if(verdadero=true){
    Objeto::Objeto(){};
    Objeto::Objeto(std::string Nom,int AnioComprado,ESTADO Estado){
     this->Nombre=Nom;
     this->AnioComprado=AnioComprado;
     this->Estado=Estado;
    };
};
 cout << "¿Quieres el Objeto: " << Nom <<" - "<< AnioComprado <<" - " << Estado << /n <<"   ¿ Si - No ?" ;
    cin >> respuesta;
if(respuesta=='Y'){
//une el objeto al niño
return "Disfrute de su prestamo";
}
else{
    if(respuesta=='N'){
return "Prestamo Cancelado";
}
else{ return "Error"};
}
;