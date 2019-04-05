# Notas en clase

## Datos curiosos

```c++
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
```

:smile: :computer:

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
int * puntero; // puntero
int * vector [SIZE]; // VECTOR de tipo int
int ** vector [SIZE] // vector de punteros de tipo (int *)

//reservo una direccion de menoria de 20 posiciones de tipo Valor en un vector de tipo Valor.
Valor *vec = new Valor [20];
/*reservo una direccion de memoria de 20 tambien de (Valor *), es decir un puntero
* de tipo Valor que apuntara a la direccion de memoria de tipo Valor y me aseguro
* de que el valor este protegido.
*/
const Valor **vec_ord = new const Valor *[20];
````

## Constantes en funciones
Indica que la funcion se compromete a no modificar los datos miembro.
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
