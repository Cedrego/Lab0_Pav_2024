#include "ESTADO.h"
#include <string>

class Objeto{
    protected:
        std::string Nombre;
        int AñoComprado;
        ESTADO Estado;
    public:
    virtual std::string toString();
};