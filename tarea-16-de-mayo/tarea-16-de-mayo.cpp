#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int c, n, s, m;
	cout<<"ingrese una contrase�a ( numerica): ";
	cin>>c;
	cout<<"Ingrese un numero de cifrado: ";
	cin>>n;
	s= n + c;
	m= s * n;
	 cout<<"contrase�a cifrada: "<<m;
	return 0;
}

