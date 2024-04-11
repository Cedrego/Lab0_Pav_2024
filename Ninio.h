#ifndef NINIO_H
#define NINIO_H
#include <set>
#include "Objeto.h"

class Ninio{
    private:
        std::string Nombre;
        int Edad;
        std::string Direccion;
        std::string Telefono;
        set<Objeto*> objetosPrestados;
    public:
        Ninio();
        Ninio(std::string Nom2, int Edad, std::string Direccion, std::string Telefono);
        void prestarObjeto(Objeto *objeto);
        void devolverObjeto(Objeto *objeto); 
        std::set<string> ListarObjetosPrestados();
        std::string getNombre();

};
#endif