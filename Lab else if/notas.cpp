#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float n1,n2,n3,n4,n5, nf;
	cout<<"Ingrese la primera nota ";
	cin>> n1;	
	cout<<"Ingrese la segunda nota ";
	cin>> n2;
	cout<<"Ingrese la tercera nota ";
	cin>> n3;
	cout<<"Ingrese la cuarta nota ";
	cin>> n4;
	cout<<"Ingrese la quinta nota ";
	cin>> n5;
	
	nf= (n1 + n2+ n3 +n4 + n5)/5;
	
	if ( nf < 61)
	{
		cout<<" no tiene permitido hacer su examen privado "<<endl<< "su promedio es de: "<<nf;
	}
	else if (nf >= 61 && nf <= 75)
	{
		cout<<"si realiza trabajo comunitario, puede hacer su examen privado"<<endl<< "su promedio es de: "<<nf;
	}
	else if ( nf >= 76 && nf <= 85)
	{
		cout<<"Promedio normal, puede hacer su examen privado"<<endl<< "su promedio es de: "<<nf;
	}
	else if ( nf >= 86 && nf <= 90 )
	{
		cout<<"Promedio alto, si se gradua sera con honores"<<endl<< "su promedio es de: "<<nf;
	}
	else if ( nf >= 91 && nf <= 95 )
	{
		cout<<"Promedio muy alto, si se gradua será con con máximos honores"<<endl<< "su promedio es de: "<<nf;
	}
	else if ( nf > 95)
	{
		cout<<"Puede exanerarse de examen privado"<<endl<< "su promedio es de: "<<nf;
	}
	
	return 0;
}

