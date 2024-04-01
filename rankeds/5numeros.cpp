#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1, n2, n3, n4, n5 , r1, r2, r3;
	cout<<"ingrese el primer numero: ";
	cin>>n1;
	cout<<"ingrese el segundo numero: ";
	cin>>n2;	
	cout<<"ingrese el tercer numero: ";
	cin>>n3;
	cout<<"ingrese el cuarto numero: ";
	cin>>n4;
	cout<<"ingrese el quinto numero: ";
	cin>>n5;
	r1= n1 - n5;
	cout<<"\nla resta del primer y quinto numero es: "<<r1;
	r2= n2 + n3 + n4;
	cout<<"\nel segundo numero, tercero y cuarto numero sumandose: "<<r2;
	r3= r1 * r2;
	cout<<"\nel resulta de la multiplicacion de los dos numeros: "<<r3;
	return 0;
}

