#include "ESTADO.h"
#include <string>

class Objeto{
    protected:
        std::string Nombre;
        int AñoComprado;
        ESTADO Estado;
    public:
    static std::string toString();
};