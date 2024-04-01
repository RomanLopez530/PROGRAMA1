#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad, edad2; 
	cout<<"ingrese una edad: ";
	cin>>edad;
	cout<<"ingrese otra edad: ";
	cin>>edad2;
	
	if (edad < 18 && edad2 >= 18 )
	{
		cout<<"el primero es menor de edad y el segundo mayor de edad ";
	}
	if (edad >= 18 && edad2 < 18 )
	{
		cout<<"el segundo es menor de edad y el primero mayor de edad ";
	}
	if (edad < 18 && edad2 < 18 )
	{
		cout<<"los dos son menores de edad ";
	}
	if (edad>= 18 && edad2 >= 18 )
	{
		cout<<"los dos son mayores de edad ";
	}
	
	return 0;
}

