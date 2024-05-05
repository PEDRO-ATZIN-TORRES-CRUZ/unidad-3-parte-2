#include <iostream>
using namespace std;

int main()
{   int i=1;
  float num, 	Total=0.0;
  char choose='1';
  //Mensaje de bienvenida
  
  cout << "Este programa suma los numeros capturados "<<"\n";
  
  while (choose=='1')
  
  {
  	//Se pide el primer numero 
  	cout << "por favor ingrese el numero: ";
  	//Se asigna el valor a rum 
  	cin>> num;
  	
  	Total=Total+num;
  	cout<<" Para continuar capturando mas datos 1, para termnar 0  "<<endl;
  	cin>>choose;
  }
  cout<<" La suma de los números es"<<Total<<endl;
  return 0;
}
