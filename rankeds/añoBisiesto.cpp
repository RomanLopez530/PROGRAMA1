#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, r1;
	cout<<"ingrese un a�o: ";
	cin>>a;
	r1= a % 4;
	if (r1 > 0)
	{
		cout<<"el a�os no es bisiesto ";
	}
	else 
	{
		cout<<"el a�o es bisiesto";
	}
	return 0;
}

