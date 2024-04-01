#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float p, a, i;
	cout<<"Ingrese su peso en kilos: ";
	cin>>p;
	cout<<"Ingrese su altura en metros: ";
	cin>>a;
	i= p / (a * a);
	
	if ( i < 18.5)
	{
		cout<<"su indice de masa corporal es de "<<i<<" su peso es bajo";
	}
	else if ( i >= 18.5 && i < 25)
	{
		cout<<"su indice de masa corporal es de "<<i<<" su peso es normal";
	}
	else if ( i >= 25 && i < 30)
	{
		cout<<"su indice de masa corporal es de "<<i<<" usted esta en sobre peso";
	}
	else if ( i > 30)
	{
		cout<<"su indice de masa corporal es de "<<i<<" usted esta en obesidad ";
	}
	return 0;
}

