#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, r, r1, r2;
	cout<<"Ingrese el año: "; 
	cin>>a;
	r = a % 4;
	r1 = a % 100;
	r2 = a % 400;
	if ( r == 0 && r1 > 0 || r2 == 0)
	{
		cout<< "El año es bisiesto";
	}
	else 
	{
	 cout<<"el año no es bisiesto";
	}
	return 0;
}

