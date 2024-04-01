#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, r1;
	cout<<"ingrese un año: ";
	cin>>a;
	r1= a % 4;
	if (r1 > 0)
	{
		cout<<"el años no es bisiesto ";
	}
	else 
	{
		cout<<"el año es bisiesto";
	}
	return 0;
}

