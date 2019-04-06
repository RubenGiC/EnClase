/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "doble_puntero.h"

using namespace std;

void p(){
    cout << "hola";
}

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

