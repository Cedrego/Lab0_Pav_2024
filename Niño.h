#include <iostream>
#include <string>
#include <set>
#include "Objeto.h"
using namespace std;

class Niño{
    private:
        std::string Nombre;
        int Edad;
        std::string Direccion;
        std::string Telefono;
        set<Objeto*> objetosPrestados;
    public:
        Niño::Niño();
        Niño::Niño(std::string Nom2, int Edad, std::string Direccion, std::string Telefono);
        void prestarObjeto(Objeto *objeto);
        void devolverObjeto(Objeto *objeto); 
        std::set<string> ListarObjetosPrestados();
        std::string getNombre();

};