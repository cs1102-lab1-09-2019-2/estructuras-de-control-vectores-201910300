#include <iostream>
#include <stdexcept> //Validar en la division por 0
#include <string>
using std::cout;
using std::cin;
using std::invalid_argument;
using std::string;


void mostrarMenu();
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int modulo(int a, int b);


void mostrarMenu() {
    cout<<"***************************************************\n";
    cout<<"                     MENU                          \n";
    cout<<"***************************************************\n";
    cout<<"  1.- Add\n";
    cout<<"  2.- Resta\n";
    cout<<"  3.- Multiplicar\n";
    cout<<"  4.- Dividir\n";
    cout<<"  6.- Modulo\n";
    
  
  
}

int main() {int opcion,valor1,valor2;
  mostrarMenu();
  cout<<"Ingrese opcion:";
  cin>>opcion;
  cout<<"Ingresa los dos numeros separados por espacio: \n";
  cin>>valor1>>valor2;
  
  switch(opcion){
    case 1:
     opcion= valor1 + valor2;
     cout<<opcion;
     break;
    case 2:
      opcion=valor1-valor2;
      cout<<opcion;
      break;
    case 3:
      opcion= valor1*valor2;
      cout<<opcion;
      break;
    case 4:
       opcion=valor1/valor2;
       cout<<opcion;
       break;
    case 5:
        opcion=valor1%valor2;
        cout<<opcion;
        break;
    default:
      cout<<"NO ESTA EN EL RANGO DE OPCIONES";
  }

 
   
    return 0;
}

