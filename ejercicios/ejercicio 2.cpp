#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int anos, edad;
	cout<<"ingrese los años de servicio de la persona; ";
	cin>>anos; 
	cout<<"ingrese la edad de la persona: ";
	cin>>edad; 
	
	if (anos >= 25 && edad >= 65)
	{
		cout<<"ya se puede jubilar, felicidades ";
	}
	else 
	{
		cout<< " aun no puede jubilarse "; 
	}
	return 0;
}

