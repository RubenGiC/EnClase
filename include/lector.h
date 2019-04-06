/* 
 * File:   main.cpp
 * Author: RubenGiC
 *
 * Created on 5 de abril de 2019, 16:32
 */
#ifndef LECTOR_H
#define LECTOR_H
#include <iostream>

void Inicializar(char * &array,int &util);

void Leer(std::istream &flujo,char * &array, int &util);

void Liberar(char * &array, int &util);

void Mostrar(std::ostream &flujo, const char * array, int util);

void Redimensionar(char * &array, int util, int incremento);

void Add(char * &array, int &util, char caracter);

#endif