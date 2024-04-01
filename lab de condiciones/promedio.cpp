#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1,n2,n3;
	float r1,r2;
	cout<<"ingrese la primera nota: "; 
	cin>>n1;
	cout<<"ingrese la segunda nota: "; 
	cin>>n2;
	cout<<"ingrese la tercera nota: "; 
	cin>>n3;
	if (n1 > 61 && n2 > 61 && n3 > 61 )
	{
		r1= n1 + n2 +n3;
		r2= r1/3;
		cout<<"su promedio es de: "<<r2;
	}
	else 
	{
		cout<<"de tener sus notas en limpio";
	}
	return 0;
}

