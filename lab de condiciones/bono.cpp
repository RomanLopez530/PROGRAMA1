#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int ano;
	float sal, bono;
	cout<<"ingrese su salario: Q.";
	cin>>sal;
	cout<<"cuantos años lleva en la empresa (SOLO PUEDE INGRESAR AÑOS ) :";
	cin>>ano;
	
	if( ano >= 1 && ano <= 5)
	{
		bono= sal * 0.05;
		cout<<"su bono es de:"<<bono; 
	}
	else if (ano >5)
	{
		bono= sal * 0.10;
		cout<<"su bono es de: Q."<<bono;
	}
	return 0;
}

