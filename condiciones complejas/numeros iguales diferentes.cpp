#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2; 
	cout<<"ingrese un numero: ";
	cin>>num1;
	cout<<"ingrese un segundo numero: ";
	cin>>num2;
	if(num1 == num2)
	{
		cout<<"los dos numeros son iguales y son: "<<num1;
	}
	else 
	{
		cout<<"los numeros "<<num1<<" y "<<num2<<" no son iguales";
	}
	return 0;
}

