#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a;
	cout<<"cuanto ganas?";
	cin>>a;
	if(a == 2800)
	{
	 cout<<"es igual al minimo";
	}
	if(a < 2800)
	{
		cout<<"es menor al salario minimo";
	}
	if(a > 2800)
	{
		cout<<"es mayor al salario minimo";
	}
	return 0;
}

