#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float s, i;
	cout<< "Ingrese cuanto gana por mes: ";
	cin>> s;
	if ( s <= 15000)
	{
	 i= s * 0.05;
	 cout<<"Usted debe pagar un 5% de impuestos "<<endl<<"Sus impuestos a pagar son: "<< i;
	}
	else if ( s >= 15001 && s <= 30000)
	{
		i= s * 0.12;
		cout<<"Usted debe pagar un 12% de impuestos "<<endl<<"Sus impuestos a pagar son: "<< i;
	}
	else if ( s >= 30001)
	{
		i= s * 0.21;
		cout<<"Usted debe pagar un 21% de impuestos "<<endl<<"Sus impuestos a pagar son: "<< i;
	}
	
	return 0;
}

