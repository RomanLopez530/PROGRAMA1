#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float c, o, r;
	cout<<"Ingrese la cantidad a calcular: ";
	cin>>c; 
	cout<<"Cual de estas opciones quiere realizar (ingrese el numero de la operación): \n";
	cout<<"1. Kms a Metros\n ";
	cout<<"2. Metros a Kms\n ";
	cout<<"3. Pies a pulgadas\n ";
	cout<<"4. Pulgadas a pies\n ";
	cout<<"5. Kms a Millas\n ";
	cin>>o; 
	if( o == 1)
	{
		r= c * 1000;
		cout<<"En metros es: "<<r;
	}
	else if( o == 2)
	{
		r= c / 1000;
		cout<<"En kilometros es: "<<r;
	}
	else if( o == 3)
	{
		r= c * 12;
		cout<<"En pulgadas es: "<<r;
	}
	else if( o == 4)
	{
		r= c / 12;
		cout<<"En pies es: "<<r;
	}
	else if( o == 5)
	{
		r= c / 1.609;
		cout<<"En Millas es: "<<r;
	}
	return 0;
}

