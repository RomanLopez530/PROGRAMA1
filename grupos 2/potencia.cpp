#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n, n1, r= 1 ; 
	cout << "ingrese un numero: ";
	cin >> n ;
	cout << "ingrese otro numero: ";
	cin >> n1;
	
	if ( n <= 10 && n1 <= 10) 
	{
		for( int p= 1; p <= n1; p++) 
		{

		r= r * n;

		}
		cout<<" el resultado es: "<<r;
	}
	else 
		{
		cout<<" solo numeros menores que 10 ";
	}
	
	return 0;
}

