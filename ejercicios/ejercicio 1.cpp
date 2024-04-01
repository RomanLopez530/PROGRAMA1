#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout<<"ingrese el primer numero: "; 
	cin>>num1;
	cout<<"ingrese el segundo numero: ";
	cin>>num2;
	
	if (num1 != num2 )
	{
		cout<<"los numeros no son iguales "<<endl;
	}
	if (num1 <= num2 )
	{
		cout<<"los numero 1 es menor o igual al numero 2 "<<endl;
	}
	if (num1 >= num2 )
	{
		cout<<"los numero 1 es mayor o igual al numero 2 "<<endl;
	}
	if (num1 < num2 )
	{
		cout<<"los numero 1 es menor al numero 2 "<<endl;
	}
	if (num1 > num2 )
	{
		cout<<"los numero 1 es mayor al numero 2"<<endl;
	}
	bool bool1 = true;
	bool bool2 = true;
	
	if (bool1 == bool2 )
	{
		cout<< "son iguales ";
	}
	else 
	{
		cout<<"no son iguales ";
	}
	return 0;
}

