# Notas en clase

## Datos curiosos

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
}
````

:smile: :computer:  [Lista de Emojis](https://www.webfx.com/tools/emoji-cheat-sheet/)

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
}
````

## Flujo de datos (Entrada/Salida)

````c++
String Mostrar(){
  //creo el flujo de datos
  String stream oss;
  oss << "mostrar en pantalla";
  //devuelvo un string
  return oss.str();
}
````

## Punteros, Vectores y Matrices

````c++
int num; // int
int * puntero; // puntero
int array [SIZE] // Array es un puntero constante
int * vector [SIZE]; // VECTOR de tipo int
int ** vector [SIZE] // vector de punteros de tipo (int *)

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
````

## Constantes en funciones
Indica que la funcion se compromete a no modificar los datos miembro. <br>
El <b>(&)</b> la variable es devuelta por referencia, la ventaja de ser por referencia es que oculta la informacion.
````c++
bool obtenerValor(int num, int &num_cop) const;
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
getline(cin,variable);

//si mezclamos ambos despues de hacen un cin hay que poner esto para que lo ignore
cin.ignore();
````

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

## Funciones que piden punteros

````c++
void Funcion(int *);

int n;
int * pn;

//ambos son validos
Funcion(&n);
Funcion(pn);
````
