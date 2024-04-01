#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string nom1, nom2; 
	cout<< "ingrese un nombre: ";
	cin>>nom1; 
	cout<<"ingrese otro nombre: "; 
	cin>>nom2; 
	
	if (nom1 == nom2) 
	{
	 cout<<"los nombres son iguales: ";
	}
	else 
	{
		cout<<"los nombres no son iguales ";
	}
	return 0;
}

