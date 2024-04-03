#include "ESTADO.h"
#include <string>

class Objeto{
    protected:
        std::string Nombre;
        int AnioComprado;
        ESTADO Estado;
    public:
    virtual std::string toString();
};