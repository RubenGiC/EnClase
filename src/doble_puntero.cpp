/* 
 * File:   main.cpp
 * Author: RubenGiC
 *
 * Created on 5 de abril de 2019, 16:32
 */
#include <iostream>
#include "doble_puntero.h"

using namespace std;


//inicializacion de doble puntero
void Doble_puntero::Inicializar(char ** array,int &util){
    *array=0;
    util=0;
}
//redimensio de doble puntero
void Doble_puntero::Redimensionar(char ** array, int util, int incremento){
    char * nuevoArray = new char [util+incremento];
    for(int i=0;i<util;i++){
        nuevoArray[i]=(*array)[i];
    }
    Liberar(array,util);
    //*array = nuevoArray;
}

void Doble_puntero::Liberar(char ** array, int& util){
    if(array){
        delete[] array;
    }
    
    //Inicializar(array,util);
    //*array = 0;
    //util = 0;
}
