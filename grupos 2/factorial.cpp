#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n, r= 1; 
	cout<<"ingrese un numero: ";
	cin>> n;
	for( int f = 1; f <=  n;  f++) 
	{
		r= f * r;
	}
	cout<<" el factorial del numero es; "<<r;
	return 0;
}

