/* 
 * File:   main.cpp
 * Author: RubenGiC
 *
 * Created on 5 de abril de 2019, 16:32
 */
#include <iostream>
#include "vectorsd.h"

using namespace std;

//creo una plantilla de Doble_puntero
VectorSD::VectorSD(){
    info = new int[SIZE];
    reservado = SIZE;
    util = 0;
}

VectorSD::VectorSD(int espacio){
    info =new int [espacio];
    reservado = espacio;
    util=0;
}

int VectorSD::getDato(int posicion) const{
    int dato = -1;
    
    if(posicion<util && posicion>=0) dato = info[posicion];
    
    return dato;
}

//devuelve el tamaño utilizado del array
int VectorSD::nElementos() const{ return util;}

void VectorSD::Copia(const VectorSD& vector){
    
    Liberar();
    
    util = vector.util;
    reservado = vector.reservado;
    
    info = new int[reservado];
    
    for(int i=0;i<util;i++){
        info[i]=vector.info[i];
    }
}

void VectorSD::Liberar(){
    delete [] info;
    info = new int [SIZE];
    util=0;
    reservado = SIZE;
}

void VectorSD::Mostrar(ostream& flujo) const{
    flujo << "Tamaño del vector " << util << ": " << endl << "{";
    for(int i=0;i<util;i++){
        
        if(i+1<util) flujo << info[i] << ", ";
        else flujo << info[i];
    }
    cout << "}" << endl;
}

void VectorSD::Leer(istream& flujo){
    int dato;
    while(flujo >> dato && dato !=-1){
        Add(dato);
    }
}

void VectorSD::Add(int dato){
    if(util>=reservado) Redimensionar();
        
    info[util]=dato;
    util++;
}

void VectorSD::Redimensionar(){
    
    reservado *=2;
    int * newInfo = new int [reservado];
    
    //copia los datos
    newInfo=info;
    //for(int i=0;i<util;i++) newInfo[i]=info[i];
    
    delete [] info;
    
    info = newInfo;
    
}
