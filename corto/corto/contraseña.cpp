#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int c, r, r1; 	
	cout<<"Ingrese contraseņa: "; 
	cin>>c;
	
	if ( c > 9999) 
	{
		r = c % 2;
		if ( r > 0) 
		{
			r1 = c % 3;
			if ( r1 == 0) 
			{
				cout<< "Contraseņa correcta :D";
			}
			else 
			{
				cout<<"CONTRASEŅA INCORRECTA";
			}
		}
		else 
		{
			cout<<"CONTRASEŅA INCORRECTA";
		}
	}
	else 
	{
		cout<<"CONTRASEŅA INCORRECTA";
	}
	return 0;
}

