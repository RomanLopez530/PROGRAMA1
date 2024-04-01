#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b, c, r1, r2;
	cout<<"ingrese un numero: ";
	cin>>a;
	cout<<"sume un numero: ";
	cin>>b;	
	cout<<"reste un numero: ";
	cin>>c;
	r1= a + b;
	r2= r1 - c;
	
	cout<<"la suma de los primeros dos numeros es: "<< r1<<" la resta es: "<<r2;
	return 0;
}

