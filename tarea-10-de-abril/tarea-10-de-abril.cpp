#include <iostream>
#include <string>
using namespace std;
string unir_palabras (string a, string b)
{
	return a+b;
}


int main(int argc, char *argv[]) {
	string a,b, r; 
	cout<<"ponga una palabra: ";
	cin>>a;
	cout<<"ponga otra palabra: ";
	cin>>b;
	r = unir_palabras(a, b);
	cout<<"palabras unidas: "<<r;

	return 0;
}

