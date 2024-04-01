#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char a;
	cout<<"Ingrese una letra: ";
	cin>>a;
	
	if ( a >= 'A' && a<= 'Z')
	{
		cout<<"la letra es mayuscula: "<<a; 
	}
	else if ( a >= 'a' && a<= 'z')
	{
		cout<<"la letra es minuscula: "<<a; 
	}
	else
	{
		cout<<" No es un caracter correcto";
	}
	return 0;
}

