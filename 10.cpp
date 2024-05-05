#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float num, cuadrado, cubo, zeta;
	
	//Resolverermos los valores de la ecuacion
	
	cout << "Se calculan los valores de la ecuacion z=x2+x3  "<<endl;
	//Vamos a fijar solo dos decimales para los calculos
	cout << setprecision(2);
	cout << fixed;
	cout << "x"<<"  cuadrado"<<"  cubo"<<"  zeta" << "\n";
	for (int x= 1; x<=50; x++)
	{
		cuadrado=x*x;
		cubo=x*x*x;
		zeta=cuadrado+cubo;
		
		cout <<x<<" "<<cuadrado<<" "<<cubo<<"  "<<zeta<< "\n";
	}
	
	return 0;
}
