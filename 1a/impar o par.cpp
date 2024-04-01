#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a;
	cout<<"ingrese un numero: ";
	cin>> a;
	
	if (a % 2 == 0)
	{
		cout<<"su numero es par ";
	}
	else 
	{
		cout<<"su numero es impar";
	}
	return 0;
}

