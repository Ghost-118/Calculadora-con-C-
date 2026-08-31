#include <iostream>
#include <math.h>
using namespace std;

int main () {
	
	int N1, N2, suma, resta, multiplicacion, division;
	char name[10];
	
	cout<<"Hola, Usuario"<<endl;
	cout<<"Ingresa tu nombre: "<<endl; 
	cin>>name;
	cout<<"Hola: "<<name<<endl; 
	
	cout<<"Ingresa un numero: "<<endl;
	cin>>N1; 
	
	cout<<"Ingresa un numero: "<<endl;
	cin>>N2; 
	
	suma = N1 + N2;
	resta = N1 - N2;
	multiplicacion = N1 * N2;
	division = N1 / N2;
	
	cout<<"El resultado de la suma es: "<<suma<<endl;
	cout<<"El resultado de la resta es: "<<resta<<endl;
	cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
	cout<<"El resultado de la division es: "<<division<<endl;
	
	return 0;
}