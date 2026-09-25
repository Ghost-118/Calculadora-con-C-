#include <iostream>
#include <math.h>
using namespace std;

int main () {
	
	// Declaración de variables
	int N1, N2, suma, resta, multiplicacion, division;
	char name[10];
	
	// Lectura del nombre del usuario
	cout<<"Hola, Usuario"<<endl;
	cout<<"Ingresa tu nombre: "<<endl; 
	cin>>name;
	cout<<"Hola: "<<name<<endl; 
	
	// Lectura de los números
	cout<<"Ingresa un numero: "<<endl;
	cin>>N1; 
	
	cout<<"Ingresa un numero: "<<endl;
	cin>>N2; 
	
	// Operaciones matemáticas
	suma = N1 + N2;
	resta = N1 - N2;
	multiplicacion = N1 * N2;
	division = N1 / N2;
	
	// Impresión de resultados
	cout<<"El resultado de la suma es: "<<suma<<endl;
	cout<<"El resultado de la resta es: "<<resta<<endl;
	cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
	cout<<"El resultado de la division es: "<<division<<endl;
	
	return 0;
}
