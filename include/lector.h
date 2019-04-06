
/* se incluyen directivas de compilacion condicional. La primera
 * vez que el compilador procese este archivo se define el simbolo
 * LECTOR_H, de forma que si hay varios includes de este archivo
 * no se volvera a procesar, evitando asi la repeticion de simbolos
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