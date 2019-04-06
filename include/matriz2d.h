/* 
 * File:   main.cpp
 * Author: RubenGiC
 *
 * Created on 5 de abril de 2019, 16:32
 */
#ifndef MATRIZ2D_H
#define MATRIZ2D_H

class Matriz2d{
    
    private:
        int numFilas, numColums;
        int ** matriz;
        
        int INT_MIN = -1;
    public:
        //Constructores
        Matriz2d(int filas,int colums);
        //El constructor tiene que ser obligatorio por referencia
        Matriz2d(const Matriz2d &matriz2);
        //GETS
        inline int getFilas(){ return numFilas;}//devuelve el numero de filas
        inline int getColums(){ return numColums;}//devuelve el numero de columnas
        //devuelve el valor si las posiciones fila y columna son correctos
        inline int getValor(int fila, int colum){
            int dato=INT_MIN;
            if(comprobar(fila,colum)){
                dato=matriz[fila][colum];
            }
            return dato;
        }
        //comprueba que la fila y columna este dentro de la matriz
        inline bool comprobar(int fila, int col){
            bool error = false;
            if(fila<numFilas && fila>=0 && col<numColums && col>=0){
                error = true;
            }
            
            return error;
        }
        //añade 1 valor a la matriz
        bool asignarValor(int fila,int colum,int valor);
        //DESTRUCTOR
        void liberar();
        //constructor copia
        void copia(const Matriz2d matriz_cop);
        //muestra el contenido
        void mostrarPantalla()const;
        
        Matriz2d * ExtraerMatriz(int filaIn, int colIn, int filaFin, int colFin);
        //elimina una fila
        void eliminarFila(int fila);
        //elimina una columna
        void eliminarColum(int colum);
        
        void leer();
};      

#endif