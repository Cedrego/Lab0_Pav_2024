#include <iostream>

using namespace std;
 
int main(int argc, char *argv[])
{
    /*
<<<<<<< HEAD
todo en un loop quisas un switch o asi pueda funcar
texto menu de biblioteca
añadir Niño
Eliminar Niño
añadir Objeto
Eliminar Objeto
Prestar Objeto
Listar Objetos Prestados
Listar Objetos Rotos
=======
    char obje;
    char verde;
    char op;
    do{
        cout<<"[texto menu de biblioteca]"<<"\n";
        cout<<"1-Añadir Niño"<<"\n";
        cout<<"2-Eliminar Niño"<<"\n";
        cout<<"3-Añadir Objeto"<<"\n";
        cout<<"4-Eliminar Objeto"<<"\n";
        cout<<"5-Prestar Objeto"<<"\n";
        cout<<"6-Listar Objetos Prestados"<<"\n";
        cout<<"7-Listar Objetos Rotos"<<"\n";
        cout<<"8-Finalizar programa"<<"\n";

        switch(op){
            case '1':
            string Nom2;
            int Edad;
            string Direccion;
            string Telefono;
            cout<<"ingresar datos"<<"\n";
            cout<<"nombre: ";  cin>>Nom2;  cout<<"\n"<<"edad: ";  cin>>Edad; cout<<"\n"<<"Direccion :";cin>>Direccion;
            cout<<"\n"<<"Telefono: ";  cin>>Telefono;
            cout<<"\n"<<"¿Los datos son correctos?"<<"\n"<<"    Y - N   "<<"\n"<< (si contesta diferente se toma cono N);
            cin>>verde;
            if(verde=='Y'){
            Niño::Niño(Nom2,Edad,Direccion,Telefono);
            }
                break;
            case '2':
            string Nom2;
            int Edad;
            string Direccion;
            string Telefono;
            cout<<"ingresar datos"<<"\n";
            cout<<"nombre: ";  cin>>Nom2;  cout<<"\n"<<"edad: ";  cin>>Edad; cout<<"\n"<<"Direccion :";cin>>Direccion;
            cout<<"\n"<<"Telefono: ";  cin>>Telefono;
            cout<<"\n"<<"¿Los datos son correctos?"<<"\n"<<"    Y - N   "<<"\n"<< (si contesta diferente se toma cono N);
            cin>>verde;
            if(verde=='Y'){
            //seria llamar la funcion Niño para borrar ese, no c como
            //Niño::Niño(Nom2,Edad,Direccion,Telefono);
            cout<<"\nNiño borrado del sistema";
            }
                break;
            case '3':
            string Nom;
            int AnioComprado;
            ESTADO estado;
            cout<<"ingresar datos"<<"\n";
            cout<<"nombre: ";  cin>>Nom;  cout<<"\n"<<"Año Comprado: ";  cin>>AnioComprado; 
            cout<<"\n"<<"Estado :";cin>>Estado;
            cout<<"\n"<<"¿Es un libro o un juego de mesa?<<"\n( LB - JM )"<<"\n(si contesta diferente se toma cono Error)";
            cin>>obje;
            if(obje=='LB'){
            int CantPaginas;
            string Autor;
            cout<<"\nLibro confirmado"<<"\n cantidad de paginas: ";   cin>>CantPaginas;
            cout<<"\nAutor: ";   cin>>Autor;
            Libro::Libro(Nom,AnioComprado,Estado,CantPaginas,Autor)
            }else{if(obje=='JM'){
                int CantJugadores,EdadRecomendada;
                cout<<"\nJuego de mesa confirmado"<<"\n Cantidad de Jugadores: "cin>>CantJugadores;
                cout<<"\nEdad Recomendada: ";cin>>EdadRecomendada;
                JuegoMesa::JuegoMesa(Nom,AnioComprado,Estado,CantJugadores,EdadRecomendada)
                }else{cout<<"\nERROR";}
            }
                break;
        
            case '4':
             string Nom;
            int AnioComprado;
            ESTADO estado;
            cout<<"ingresar datos"<<"\n";
            cout<<"nombre: ";  cin>>Nom;  cout<<"\n"<<"Año Comprado: ";  cin>>AnioComprado; 
            cout<<"\n"<<"Estado :";cin>>Estado;
            cout<<"\n"<<"¿Es un libro o un juego de mesa?<<"\n( LB - JM )"<<"\n(si contesta diferente se toma cono Error)";
            cin>>obje;
            if(obje=='LB'){
             //comprobar si existe y borrarlo
            }else{
                if(obje=='JM'){
                  //comprobar si existe y borrarlo
                }
            }
                break;
            case '5':
            //llamar a Prestado_a
                break;
            case '6':
            //llamar a LitarObjetosPrestados
                break;
            case '7':
            //hay que crear un ListarObjetosRotos
        }
    }while(op!='8');

todo en un loop quisas un switch o asi pueda funcar
>>>>>>> 92deffcc68b7f53aec8ed751e2335b3d75fd749f
loop al 
añadir Niño
Añadir Objeto
elegir Prestar Objeto
*/
    return 0;
}