/* 
 * File:   main.cpp
 * Author: RubenGiC
 *
 * Created on 5 de abril de 2019, 16:32
 */

#include <cstdlib>
#include <iostream>
#include <fstream> // necesario para ifstream
// se incluye el archivo de cabecera con las declaraciones de las
// funciones pedidas
#include "lector.h"
#include "doble_puntero.h"
#include "vectorsd.h"
#include "matriz2d.h"

using namespace std;

int main(int argc, char** argv) {
    
// MATRIZ2D --------------------------------------------------------------------
    
    cout << "MATRIZ2D ---------------------------------------------------------" << endl;
    
    int fil=3,col=3;
    Matriz2d *obj1 = new Matriz2d(fil,col);
    obj1->leer();
    obj1->mostrarPantalla();
    obj1->liberar();
    
// VECTORSD --------------------------------------------------------------------
    
    /*cout << "VECTORSD ---------------------------------------------------------" << endl;
    
    VectorSD *obj = new VectorSD(5);
    VectorSD *obj2 = new VectorSD;
    cout << obj->nElementos();
    
    obj->Leer(cin);
    obj->Mostrar(cout);
    
    obj2->Copia(*obj);
    cout << endl << "Segundo objeto: " << endl;
    obj2->Mostrar(cout);
    
    obj->Liberar();*/

// DOBLE PUNTERO ---------------------------------------------------------------
    
    /*cout << "DOBLE PUNTERO ----------------------------------------------------" << endl;
    
    char ** array;
    int utiles2;
    //para crear clases con .h, la clase se tiene que llamar igual que el archivo
    //Nota: (puede ser en mayuscula y el archivo no, pero que tenga el mismo nombre)
    //siempre tengo que reservar memoria para crear un objeto de la clase Doble_puntero
    Doble_puntero *v = new Doble_puntero;
    
    //falla el inicializar
    //v->Inicializar(array,utiles2);
    v->Redimensionar(array,utiles2,1);*/
    
// LECTOR ----------------------------------------------------------------------
    
    /*cout << "LECTOR -----------------------------------------------------------" << endl;
    
    cin.ignore();
    
    char * arrayChar;
    int utiles;
    
    Inicializar(arrayChar,utiles);
    
    //si solo recibe un argumento lo añade de forma manual
    if(argc == 1){ Leer(cin,arrayChar, utiles);}
    else{
        /* en este caso se entiende que el segundo argumento, almacenado
         * en argv[1] contiene el nombre del archivo del que hay que
         * leer. Para ello hace falta crear un objeto de la clase
         * ifstream (input file stream)que permita gestionar la lectura 
         * desde el archivo.
         */
        /*ifstream fhijo(argv[1]);
        //Si al leer la lectura del archivo es erronea mostrara este mensaje
        if(!fhijo){
            cerr << "Error apertura del archivo: " << argv[1] << endl;
            return 1; // finaliza el programa
        }
        
        Leer(fhijo,arrayChar,utiles);
    }
    
    Mostrar(cout,arrayChar,utiles);
    // se libera el espacio
    Liberar(arrayChar,utiles);*/
    
//------------------------------------------------------------------------------
    return 0;
}

