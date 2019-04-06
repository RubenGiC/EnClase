/* 
 * File:   main.cpp
 * Author: RubenGiC
 *
 * Created on 5 de abril de 2019, 16:32
 */
#ifndef VECTORSD_H
#define VECTORSD_H
#include <iostream>

class VectorSD{
    private:
        int * info; // reservo memoria dinamica
        int util; // espacio usado
        int reservado; // tamaño maximo disponible
        
        const int SIZE=10;
        
        void Add(int dato);// añade datos
        void Redimensionar();// redimensiona el array
        
    public:
        //inicialización
        VectorSD();
        VectorSD(int espacio);
        
        //lee los datos
        void Leer(std::istream &flujo);
        //devuelve el dato de la posicion especificada, en caso contrario devuelve -1
        int getDato(int posicion) const;
        
        int nElementos() const;
        //hace una copia del vector
        // (&) me aseguro de que pase por referencia sin que se haga copia
        void Copia(const VectorSD &vector);
        
        void Liberar();// libera la memoria utilizada
        
        void Mostrar(std::ostream &flujo)const;
};
#endif
