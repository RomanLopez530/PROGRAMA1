#include <iostream>
using namespace std;
void multiplos(int n)
{
	cout << "Los multiplos de " << n << " son:" << endl;
	for (int i = 1; i <= 10; ++i) {
		cout << n * i << " ";
	}
}
int factorial(int n)
{
		int factorial = 1;
		for (int i = 1; i <= n; ++i) {
			factorial *= i;
		}
		return factorial;
}
void fibonacci(int n)
{
int n1 = 0, n2= 1 , f;

for (int x= 0; x <= n; x++)
{
	cout <<"fibonacci numero: "<<x<<". "<<"Es: "<< n2 << endl;
	f = n1 + n2;
	n1 = n2;
	n2 = f;
}
}
int main(int argc, char *argv[]) {
int n,o;
cout<<"ingrese un numero: ";
cin>>n;
cout<<"------------------------------------------"<<endl;
cout<<"opciones"<<endl;
cout<<"------------------------------------------"<<endl;
cout<<"1.saber sus multiplos"<<endl;
cout<<"2.saber el facotrial "<<endl;
cout<<"1.saber la serie de fibonacci"<<endl;
cin>>o;
switch(o){
case 1:
	multiplos (n);
break;
case 2:
	cout << "El factorial es " << factorial(n) << endl;
break;
case 3:
fibonacci(n);
break;

default:
	cout<<"no es una opccion correxta";
	break;
	
	
}
	return 0;
}

