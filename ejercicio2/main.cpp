#include <iostream>
#include "tipos.h"
using namespace std;

int main() {
  double Claro, Zona, Precio;

  cout<<"Escoja una zona. Ingrese 1.0 para Super Vip, 2.0 para Vip, 3.0 para Preferencial y 4.0 para General: \n";
  cin >> Zona;

  cout<<"si es cliente claro de ingresar 1.0, si no lo es debe  escribir 2.0: \n";
  cin >> Claro;

// ToDO

  if (Zona == 1.0){
    if (Claro == 1.0){
      Precio = 212.00*0.08;
      cout << "a pagar: "<<Precio;
    }
    else{
      cout << "a pagar: 212.00\n";
    }
  }
  else if (Zona == 2.0){
    if (Claro == 1.0){
      Precio = 170*0.08;
      cout <<"a pagar: "<< Precio;
    }
    else{
      cout <<"a pagar: 170.00\n";
    } 
  }
  else if (Zona == 3.0){
    if (Claro == 1.0){
      Precio = 136*0.08;
      cout <<"a pagar: "<< Precio;
    }
    else{
      cout << "a pagar: 136.00\n";
    } 
  }
  else if (Zona == 4.0){
    if (Claro == 1.0){
      Precio = 59*0.08;
      cout << "a pagar: "<<Precio;
    }
   
  return 0;
    
    } 
