# Notas en clase

## Indice

* [Datos curiosos](https://github.com/RubenGiC/EnClase#datos-curiosos)
* [Constantes](https://github.com/RubenGiC/EnClase#constantes)
* [Constantes en Funciones](https://github.com/RubenGiC/EnClase#constantes-en-funciones)
* [Boole en la funcion para comprobaciones](https://github.com/RubenGiC/EnClase#boole-en-la-funcion-para-comprobaciones)
* [Flujo de datos (Entrada/Salida)](https://github.com/RubenGiC/EnClase#flujo-de-datos-entradasalida)
* [Formas de leer los datos (cin y getline)](https://github.com/RubenGiC/EnClase#formas-de-recibir-los-datos)
* [Punteros, vectores y matrices](https://github.com/RubenGiC/EnClase#punteros-vectores-y-matrices)
* [Funciones que piden punteros](https://github.com/RubenGiC/EnClase#funciones-que-piden-punteros)
* [Punteros con clases](https://github.com/RubenGiC/EnClase#punteros-con-clases)
* [Libreria <cstring\>](https://github.com/RubenGiC/EnClase#libreria-cstring)
* [Uso de NULL](https://github.com/RubenGiC/EnClase#uso-de-null)
* [Random (Numeros aleatorios)](https://github.com/RubenGiC/EnClase#numeros-aleatorios)
* [Creacion de objetos](https://github.com/RubenGiC/EnClase#creacion-de-objetos)
* [Creacion de funcionalidad de una funcion de una clase](https://github.com/RubenGiC/EnClase#creacion-de-funcionalidad-de-una-funcion-de-una-clase)
* [This](https://github.com/RubenGiC/EnClase#this-en-c)
* [Reduccion de tiempo de ejecucion (inline)](https://github.com/RubenGiC/EnClase#reduccion-de-tiempo-de-ejecucion-inline)
* [Constructor que recibe un objeto](https://github.com/RubenGiC/EnClase#constructor-que-recibe-un-objeto)
* [Clases](https://github.com/RubenGiC/EnClase#clases)

## CLASES
### Calores por defecto en las funciones:
```c++
//los por defecto siempre se ponen a la derecha y al ponerle =0 quiere decir que si no recibe 
//ningun valor por defecto toma 0
void comprobacion(int xs, int ys, int dxs=0, int dys=0);
```

## Datos curiosos
<iostream\> tiene *cin*, *cout* y *cerr* <br>
***En [main](https://github.com/RubenGiC/EnClase/blob/master/main.cpp), [vectorsd.h](https://github.com/RubenGiC/EnClase/blob/master/include/vectorsd.h) y [vectorsd.cpp](https://github.com/RubenGiC/EnClase/blob/master/src/vectorsd.cpp), he añadido una clase que utiliza .h y funciona***
````c++
// constante dimensional
const int SIZE=10;

//Estructura clase

class Clase{

  //funciones y variables privadas
  private:

    int * vec;
    void Mostrar(int n);

  //funciones y variables privadas
  public:

    int * vec2;
    void Editar(int n);

    void Ordenar(int array[],int util,bool(* comp)(int,int)){
      for(int i=0;...){
        for(int j=0;...){
          if(!(* comp))(array[i],array[j]){}
        }
      }
    }

    bool ComprobarAscendente();
    bool ComprobarDescendente();
};

int main(){
  Clase c;

  c.Ordenar(datos,util,ComprobarAscendente);
  c.Ordenar(datos,util,ComprobarDescendente);
}
````

:smile: :computer:  [Lista de Emojis](https://www.webfx.com/tools/emoji-cheat-sheet/)

## Constantes

```c++
//protejo el contenido de esa variable (NO SE PUEDE MODIFICAR EL CONTENIDO)
const int variable;
//protejo el puntero (NO SE PUEDE MODIFICAR EL PUNTERO PERO SI EL CONTENIDO AL QUE APUNTA)
double * const puntero;
//protejo ambas cosas el contenido y al puntero (NO SE PUEDE MODIFICAR NI EL CONTENIDO, NI EL PUNTERO)
const int * const puntero;
```
## Constantes en funciones
Indica que la funcion se compromete a no modificar los datos miembro. <br>
El <b>(&)</b> la variable es devuelta por referencia, la ventaja de ser por referencia es que oculta la informacion.
````c++
bool obtenerValor(int num, int &num_cop) const;
````
## Boole en la funcion para comprobaciones

````c++
const int SIZE=50;

class Clase{
  private:
    int vectorPrivado[SIZE];
    int utilizados;

  public:
    bool AsignarValores(int valores[], int numValores){
      bool flag = false;
      if(numValores<=SIZE){
        for(int i=0;i<numValores;i++){ vectorPrivado[i]=valores[i];}

        utilizados = numValores;
        flag = true;
      }
      return flag;
    }
};

int main(){
  Clase c;// creo el objeto Clase  
  int array[5]{1,2,3,4,5};
  int num=0;

  //esto devolvera true (1)
  cout << c.AsignarValores(array,num);
}
````

## Flujo de datos (Entrada/Salida)
Se utiliza para el string la libreria __<string>__ y para el stringstream la
libreria __<sstream>__.

````c++
//implementar estas librerias siempre tanto en el main() como en el .cpp
#include <string> // para usar el string
#include <sstream>      // std::stringstream

string Mostrar(){
  //creo el flujo de datos, en el que se alamcenara los datos
  stringstream oss;
  //guardo el texto en oss
  oss << "mostrar en pantalla";
  //devuelvo un string
  return oss.str();
}

int main(){
  // muestra el contenido por que lo que devuelve es un string
  cout << Mostrar();
}
````
## Formas de recibir los datos

````c++
/* recibe los datos normales hasta que de intro (NO CONSUME EL ENTER) y los guarda
* en la variable.
*/
cin >> variable;
/* Este hace lo mismo pero con la diferencia de que puede introducir varios datos
 * separados hasta darle intro (CONSUME EL ENTER) o hasta que llene la variable
 * o de error al recibir un dato erroneo.
 */
// variable tiene que ser un string, por que lo que devuelve es un string
getline(cin,variable);

// recibe una variable de tipo string o char y el tamaño que se va a almacenar 
//(es decir el numero de caracteres que se introducira).
cin.getline(variable,tamaño);

//si mezclamos ambos despues de hacen un cin hay que poner esto para que lo ignore
cin.ignore();
````
## Punteros, Vectores y Matrices
Los punteros no tienen limite de apuntamiento, pueden apuntarse muchas veces.
Ver matriz completa ([matriz2d.h](https://github.com/RubenGiC/EnClase/blob/master/include/matriz2d.h), [matriz2d.cpp](https://github.com/RubenGiC/EnClase/blob/master/src/matriz2d.cpp) y [main](https://github.com/RubenGiC/EnClase/blob/master/main.cpp))

````c++
int num; // int
int * puntero; // puntero
int array [SIZE] // Array es un puntero constante
int * vector [SIZE]; // VECTOR de tipo int
int ** vector [SIZE] // vector de punteros de tipo (int *)
int matriz [cols][fils] // matriz de 2 dimensiones

// matriz dinamica
int **matriz;
int fila_dinamica;
int columna_dinamica;

matriz = new int *[fila_dinamica];

  for(int i = 0;i<fila_dinamica;i++){
    matriz[i] = new int[columna_dinamica];
  }

//reservo una direccion de menoria de 20 posiciones de tipo Valor en un vector de tipo Valor.
Valor *vec = new Valor [20];
/*reservo una direccion de memoria de 20 tambien de (Valor *), es decir un puntero
* de tipo Valor que apuntara a la direccion de memoria de tipo Valor y me aseguro
* de que el valor este protegido.
*/
const Valor **vec_ord = new const Valor *[20];

/* devuelve la direccion de memoria sin acortar, long lo que hace es mostrar valores
* muy grandes.
*/
long(puntero);

// devuelve el contenido de la direccion de memoria a la que apunta.
*puntero;

//apunto a la direccion de memoria de num
puntero = &num;

// modifico el contenido de num a la que apunta.
*puntero = 10;

// devuelve la direccion de memoria reservada de esa variable.
&num;
&(array[5]); // lo mismo que el otro pero con vectores.

//Al funalizar hay que liberar el espacio utilizado de los punteros y vectores
delete puntero;//libero el puntero
delete [] array;//libero el array[SIZE]
delete [] vector;//libero el * vector[SIZE]

// en el caso de una matriz ya sea dinamica o no primero liberas las filas y luego las columnas
for(int i=0;i<util;i++){
  //libero las filas
  delete [] matriz[i];
}
//libero las columnas
delete [] matriz;
````
## Funciones que piden punteros

````c++
void Funcion(int *);

int n;
int * pn;

//ambos son validos
Funcion(&n);
Funcion(pn);
````
## Punteros con clases

```c++
//igual que con las variables pero con la diferencia de que son clases
Clase * puntero;
Clase clase;
puntero = &clase;
//para llamar a una funcion de la clase desde un puntero hay 2 formas
(* puntero).funcion();
puntero->funcion();
```
## Libreria <cstring\>

La libreria **(cstring)** sirve para llamar a **(str)**
- **(strcpy):** copia un sring
- **(strlen):** devuelve la longitud del contenido de una variable string
- **(strcat):** concatena 2 strings
- **(strmp):** compara cadenas

### Implementacion:

````c++
strcmp (key,buffer); //--> devuelve 0 u otro valor (0==true, otro valor==false)
/*
strcmp < 0	the first character that does not match has a lower value in ptr1 than in ptr2
strcmp = 0	the contents of both strings are equal
strcmp > 0	the first character that does not match has a greater value in ptr1 than in ptr2
*/

strcat (str,"strings "); // concatena en la ultima posicion

//char * strcpy ( char * destination, const char * source );
strcpy (str,"these "); // copia el contenido de la 2º sentencia y lo guarda en la 1º sentencia.

strlen(variable); // devuelve el tamaño utilizado de esa variable
sizeof(variable); // devuelve el tamaño total contando el espacio no utilizado
````

## Uso de NULL

Hay que usar la libreria <b>[(cstdlib)](http://www.cplusplus.com/reference/cstdlib/)</b>

## Numeros aleatorios
variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
```c++
//para generar numeros aleatorios necesito estas 2 librerias
#include<stdlib.h>// libreria para usar srand y rand
#include<time.h>// libreria para usar time

int main(){
  //genero semilla de la fecha actual
  srand(time(NULL));
  //o en vez de usar null puedes usar 0 para indicar nulo
  srand(time(0));
  //genera un numero aleatorio
  int num = rand();

  //- Número aleatorios entre 0 y 50:
  num=rand()%51;

  //- Número aleatorios entre 1 y 100:
  num=1+rand()%(101-1);

  //- Número aleatorios entre 250 y 420:
  num=250+rand()%(421-250);

  cout << num;
}
```

## Creacion de objetos

```c++
Clase ptr;
//creacion de un objeto de Clase
ptr = new Clase();//Clase() es el constructor de la clase
Clase *obj2 = new Clase; //esta es igual a la anterior si no tiene parametros
// Clase(5) inicializa el objeto pasandole como parametro un int
Clase *obj = new Clase(5);

//claro el objeto que creo es un puntero, asique para llamar las funciones hay 2 formas
obj->Leer(cin); //recomiendo este
(* obj).Mostrar(cout);
```

## Creacion de funcionalidad de una funcion de una clase
Para poder acceder a la funcion de una clase para crear su funcionalidad tenemos que llamar a la clase para poder acceder a la funcion e indicarle que va a hacer esa funcion. Ejemplo:

```c++
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
```

## This en c++

En c++ se puede utilizar el this en las funciones.

```c++
//pueden ser el mismo nombre ambas variables
this.variable=variable
```

## Reduccion de tiempo de ejecucion **(inline)**

Se introduce la función en línea, que es una técnica de optimización utilizada por los compiladores, especialmente para reducir el tiempo de ejecución.

```c++
inline int getFilas(){ return numFilas;}
```
## Constructor que recibe un objeto
cuando el constructor recibe un objeto como parametro a la fuerza ese objeto se tiene que devolver por referencia.
```c++
//El constructor tiene que ser obligatorio por referencia
Matriz2d(const Matriz2d &matriz2);
```
