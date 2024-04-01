#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a;
	int b;
	cout<<"ingrese un numero: ";
	cin>>a;
	cout<<"ingrese otro numero: ";
	cin>>b;
	
	int resultado;
	resultado = a * b;
	
	if( resultado == 100)
	{
		cout<<"el resultado es igual a 100: "<<resultado;
	}
	if( resultado < 100)
	{
		cout<<"el resultado es menor a 100: "<<resultado;
	}
	if( resultado > 100)
	{
		cout<<"el resultado es Mayor a 100: "<<resultado;
	}
	
	return 0;
}

