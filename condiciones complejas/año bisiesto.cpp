#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, r1, r2;
	cout<<"ingrese un año: ";
	cin>>a;
	r1= a % 4;
	r2= a % 10;
	
	if (r1 > 0 && r2 > 0)
	{
		cout<<"el años no es bisiesto y no es divisible entre 10 ";
	}
	else if (r1 > 0 && r2 == 0)
	{
		cout<<"el año no es bisiesto pero es divisible entre 10 ";
	}
	else if (r1 == 0 && r2 > 0)
	{
		cout<<"el año es bisiesto pero no es divisible entre 10 ";
	}
	else if (r1 == 0 && r2 == 0)
	{
		cout<<"el año es bisiesto y es divisible entre 10 ";
	}
	
	
	
	
	return 0;
}

