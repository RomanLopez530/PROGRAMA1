#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n[15];
	for( int i = 0; i < 15;i++)
	{
		cout<<"ingrese un numero en la posicion: "<<i<<endl;
		cin>>n[i];
	}
	for(int i = 0;i < 15;i++){
		cout<<"el numero ingresado en la posicion "<<i<<":  "<<n[i]<<endl;
	}
	return 0;
}

