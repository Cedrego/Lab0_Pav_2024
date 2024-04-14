#ifndef DTOBJETOROTO_H
#define DTOBJETOROTO_H
#include <string>
#include <iostream>

class DTObjetoRoto{
    private:
        std::string NombreObjeto;
        bool Prestado;
        std::string NombreNinio;
    public:
        DTObjetoRoto(){};
        DTObjetoRoto (std::string NombreObjetoR, bool PrestadoR, std::string NombreNinioR);
        virtual ~DTObjetoRoto();
        std::string getNombreObjeto();
        bool getPrestado();
        std::string getNombreNinio();
        friend std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& obj);
};      
#endif