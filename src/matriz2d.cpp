/* 
 * File:   main.cpp
 * Author: RubenGiC
 *
 * Created on 5 de abril de 2019, 16:32
 */
#include "matriz2d.h"
#include <iostream>
using namespace std;

/**
 * Constructor que crea una matriz de tamaño indicado
 * @param filas nº de filas
 * @param colums nº de columnas
 */
Matriz2d::Matriz2d(int filas, int colums){
    //guardo el tamaño de la matriz
    this->numFilas = filas;
    this->numColums = colums;
    //creo el vector puntero a filas
    matriz = new int * [numFilas]; // int ** = int **
    //creo las filas
    for(int i=0;i<numFilas;i++){
        matriz[i] = new int [numColums]; // int * = int *
    }
}
/**
 * Libera el espacio reservado de la matriz
 */
void Matriz2d::liberar(){
    //DESTRUYE EL VECTOR FILAS
    for(int i=0;i<numFilas;i++){
        delete[] matriz[i];
    }
    //libero el vector de puntero a filas
    delete[] matriz;
    matriz=0;
}
/**
 * MUESTRO POR PANTALLA EL CONTENIDO DE LA MATRIZ
 */
void Matriz2d::mostrarPantalla() const{
    cout << endl << "Matriz de " << numFilas << " filas y " << numColums << " columnas: " << endl << endl;
    for(int i=0;i<numFilas;i++){
        for(int e=0;e<numColums;e++){
            if(e+1<numColums) cout << matriz[i][e] << "\t";
            else cout << matriz[i][e];
        }
        cout << endl;
    }
    cout << endl;
    
}

void Matriz2d::leer(){
    int dato;
    
    for(int i=0;i<numFilas;i++){
        for(int e=0;e<numColums;e++){
            cout << "Introduzca el valor de [" << i << "][" << e << "]: ";
            cin >> dato;
            if(!asignarValor(i,e,dato)){
                cout << endl << "Valor insertado es incorrecto (" << dato << ")." << endl;
            }
        }
    }
}

bool Matriz2d::asignarValor(int fila,int colum,int valor){
    bool add=false;
    if(comprobar(fila,colum)){
        matriz[fila][colum] = valor;
        add = true;
    }
    
    return add;
}