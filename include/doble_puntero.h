/* 
 * File:   main.cpp
 * Author: RubenGiC
 *
 * Created on 5 de abril de 2019, 16:32
 */
#ifndef DOBLE_PUNTERO_H
#define DOBLE_PUNTERO_H
#include <iostream>

class Doble_puntero{
        
    public:
        //inicializacion de doble puntero
        void Inicializar(char ** array,int &util);
        //redimensio de doble puntero
        void Redimensionar(char ** array, int util, int incremento);
        //libero el espacio de doble puntero
        void Liberar(char ** array, int &util);
};

#endif