#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float l1, l2,l3;
	cout<<"ingrese el primer lado del triangulo: ";
	cin>>l1;
	cout<<"ingrese el segundo lado del triangulo: ";
	cin>>l2;
	cout<<"ingrese el tercer lado del triangulo: ";
	cin>>l3;
	
	if ( l1 == l2 && l1 == l3 && l2 == l3 )
	{
		cout<<"el triangulo es equilatero";
	}
	else if ( ( l1 != l2 && l1 == l3 && l2 != l3 ) || (l1 != l2 && l1 != l3 && l2 == l3) || (l1 == l2 && l1 != l3 && l2 != l3)   )
	{
		cout<<"el triangulo es isósceles";
	}
	else if (l1 != l2 && l1 != l3 && l2 != l3  )
	{
		cout<<"el triangulo es escaleno";
	}
	
	

	return 0;
}

