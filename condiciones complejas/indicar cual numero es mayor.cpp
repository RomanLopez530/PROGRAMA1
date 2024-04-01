#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout<<"ingrese un numero: ";
	cin>>num1;
	cout<<"ingrese un segundo numero: ";
	cin>>num2;
	if (num1 > num2 )
	{
		cout<<"el numero "<<num1<<"es el numero mayor ";
	}
	else 
	{
		cout<<"el numero "<<num2<<" es el numero mayor ";
	}
	return 0;
}

