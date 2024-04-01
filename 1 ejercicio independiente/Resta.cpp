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
	resultado = a - b;

	if( resultado == 0)
	{
		cout<<"el resultado es neutro: "<<resultado;
	}
	if( resultado < 0)
	{
		cout<<"el resultado es negativo: "<<resultado;
	}
	if( resultado > 0)
	{
		cout<<"el resultado es positivo "<<resultado;
	}
	return 0;
}

