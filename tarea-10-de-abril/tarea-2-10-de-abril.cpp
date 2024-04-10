#include <iostream>
using namespace std;
double suma(double a,double b, double c)
{
	return a + b + c;
}
int main(int argc, char *argv[]) {
	double a,b,c,r;
	cout<<"ingrese un numero decimal: ";
	cin>>a;
	cout<<"ingrese otro numero decimal: ";
	cin>>b;
	cout<<"ingrese otro numero decimal: ";
	cin>>c;
	r = suma(a,b,c);
	cout<<"la suma es: "<<r;
	return 0;
}

