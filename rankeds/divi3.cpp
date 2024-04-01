#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1, r;
	cout<<"ingrese un numero: ";
	cin>>n1;
	r= n1 % 3;
	if (r > 0)
	{
		cout<<"el numero no es divisible entre 3 exacto";
	}
	else
	{
		cout<<"el numero es divisible entre tres exacto";
	}
	return 0;
}

