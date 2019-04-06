/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#ifndef DOBLE_PUNTERO_H
#define DOBLE_PUNTERO_H
#include <iostream>

void p();
class Doble_puntero{
    private:
        
    public:
        //inicializacion de doble puntero
        void Inicializar(char ** array,int &util);
        //redimensio de doble puntero
        void Redimensionar(char ** array, int util, int incremento);
        //libero el espacio de doble puntero
        void Liberar(char ** array, int &util);
};

#endif