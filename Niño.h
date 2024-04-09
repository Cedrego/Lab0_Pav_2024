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
        std::set<string> ListarObjetosPrestados();

};