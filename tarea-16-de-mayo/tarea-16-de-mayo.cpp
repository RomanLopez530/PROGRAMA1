#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int c, n, s, m;
	cout<<"ingrese una contraseņa ( numerica): ";
	cin>>c;
	cout<<"Ingrese un numero de cifrado: ";
	cin>>n;
	s= n + c;
	m= s * n;
	 cout<<"contraseņa cifrada: "<<m;
	return 0;
}

