#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num, num2;
	cout<<"ingrese un numero: ";
	cin>>num; 
	if ( num > 0 )
	{
		cout<<"el numero es positivo"<<endl;
		num2 = num % 2;
		if ( num2 == 0) 
		{
			cout<<"el numero es par";
		}
		else if(num2 > 0) 
		{
		cout<<"el numero es impar ";
		}
	}
	else if ( num < 0 )
	{
		cout<<"el numero es negativo"<<endl;
		num2= num % 2;
			if ( num2 == 0) 
			{
				cout<<"el numero es par";
			}
			else  
			{
				cout<<"el numero es impar ";
			}
		
	}
	else if ( num == 0)
	{
		cout<<"el numero no es ni positivo ni negativo y tampoco es par ni impar";
	}
	return 0;
}

