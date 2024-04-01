#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int resultado, a, b, residuo;
	cout<<"ingrese un divisor: ";
	cin>>a;
	cout<<"ingrese un dividendo: ";
	cin>>b;
	
	resultado = a / b;
	residuo= a % b;
	cout<<"el resultado es: "<< resultado<<" el residuo es: "<< residuo;
	return 0;
}

