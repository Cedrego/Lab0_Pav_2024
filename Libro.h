#include "Objeto.h"

class Libro : public Objeto{
    private:
        int CantPaginas;
        std::string Autor;
    public:
        Libro();
        Libro(std::string Nom,int AnioComprado,ESTADO Estado,int CantPaginas,std::string Autor);
        virtual string toString(){
        return "Libro: " + Nom + ", " 
        + std::to_string(AnioComprado) + ", " //to_string() != toString()
        + std::to_string(Estado) + ", "       //to_string() es parte de std
        + Autor + ", " 
        + std::to_string(CantPaginas);
        };   
};