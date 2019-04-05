/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ruben
 *
 * Created on 5 de abril de 2019, 16:32
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include "lector.h"

using namespace std;

int main(int argc, char** argv) {

    char * arrayChar;
    int utiles=0;
    
    //Inicializar(arrayChar,utiles);
    
    //si solo recibe una instruccion lo añade de forma manual
    if(argc == 1){ Leer(cin,arrayChar, utiles);}
    else{
        //creo un flujo para recibir los datos
        ifstream fhijo(argv[1]);
        //si el flujo es nulo muestra un mensaje de error
        if(!fhijo){
            cerr << "Error apertura" << argv[1] << endl;
            return 1; // finaliza el programa
        }
        Leer(fhijo,arrayChar,utiles);
    }
    
    Mostrar(cout,arrayChar,utiles);
    Liberar(arrayChar,utiles);
    
    return 0;
}

