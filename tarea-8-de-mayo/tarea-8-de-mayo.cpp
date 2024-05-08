#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	const int tama = 5;
	int n[tama];
	
	for( int i = 0; i < tama;i++)
	{
		cout<<"ingrese un numero en la posicion "<<i<<endl;
		cin>>n[i];
	}
	for(int i = 0;i < tama;i++){
		cout<<"el numero ingresado en la posicion "<<i<<":  "<<n[i]<<endl;
	}
	
	return 0;
}

