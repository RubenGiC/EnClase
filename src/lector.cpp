/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "lector.h"
using namespace std;

void prueba(){
    cout << "hola";
}

/**
 * Inicializador
 * @param array array de caracteres
 * @param util tamaño utilizado del array
 */
void Inicializar(char * &array,int &util){
    array = 0;
    util = 0;
}

/**
 * Libero espacio de la memoria
 * @param array array de caracteres
 * @param util tamaño utilizado del array
 */
void Liberar(char * &array, int &util){
    if(array){
        delete[] array;
    }
    array = 0;
    util = 0;
}

/**
 * Muestra el contenido del array
 * @param flujo se encarga de mostrar por pantalla
 * @param array array de caracteres
 * @param util tamaño utilizado del array
 */
void Mostrar(ostream &flujo, const char * array, int util){
    flujo << "Tamaño del array " << util << ":" << endl;
    flujo << "{";
    for(int i=0;i<util;i++){
        if(i+1<util) flujo << array[i] << ", ";
        else flujo << array[i];
    }
    flujo << "}";
}

/**
 * Modifica el tamaño del array (array es el unico que pasa por referencia)
 * @param array array de caracteres
 * @param util tamaño utilizado del array
 * @param incremento es el tamaño adicional que se le añadira
 */
void Redimensionar(char * &array, int util, int incremento){
    
    char * nuevoArray = new char [util + incremento];
    
    //copia los datos de array en nuevoArray
    for(int i=0;i<util;i++) nuevoArray[i]=array[i];
    
    //libero el espacio del array y lo vacio
    Liberar(array,util);
    array = nuevoArray;
}

/**
 * Añado una caracter nuevo
 * @param array array de caracteres
 * @param util tamaño utilizado del array
 * @param caracter es el caracter que se añadira
 */
void Add(char * &array, int &util, char caracter){
    
    Redimensionar(array,util,1);
    array[util]=caracter;
    util++;
}

/**
 * Lee los caracteres introducidos
 * @param flujo se encarga de mostrar por pantalla
 * @param array array de caracteres
 * @param util tamaño utilizado del array
 */
void Leer(istream &flujo,char * &array, int &util){
    
    char caracter;
    
    //mientras no de un salto de linea o otro caracter seguira pidiendo caracteres
    while(flujo.get(caracter)){ Add(array,util,caracter);}
}