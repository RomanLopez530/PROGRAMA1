#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int c, r, r1; 	
	cout<<"Ingrese contraseña: "; 
	cin>>c;
	
	if ( c > 9999) 
	{
		r = c % 2;
		if ( r > 0) 
		{
			r1 = c % 3;
			if ( r1 == 0) 
			{
				cout<< "Contraseña correcta :D";
			}
			else 
			{
				cout<<"CONTRASEÑA INCORRECTA";
			}
		}
		else 
		{
			cout<<"CONTRASEÑA INCORRECTA";
		}
	}
	else 
	{
		cout<<"CONTRASEÑA INCORRECTA";
	}
	return 0;
}

