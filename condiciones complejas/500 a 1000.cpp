#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	cout<<"ingrese un numero: ";
	cin>>num;
	if (num >= 500 && num <= 1000)
	{
		cout<<"el numero esta entre el rango de 500 a 1000";
	}
	else 
	{
		cout<<"el numero no esta dentro del rango de 500 a 1000 ";
	}
	return 0;
}

