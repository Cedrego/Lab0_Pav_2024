#include "Objeto.h"

class Libro : public Objeto{
    private:
        int CantPaginas;
        std::string Autor;
    public:
        std::string toString();
};