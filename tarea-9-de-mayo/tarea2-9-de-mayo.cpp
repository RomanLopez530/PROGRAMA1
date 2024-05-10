#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float n[4];
	for( int i = 0; i < 5;i++)
	{
		cout<<"ingrese el numero "<<i+1<<"°:"<<endl;
		cin>>n[i];
	}

	if (n[0] > n[1] && n[0] > n[2] && n[0] >n[3] && n[0] > n[4])
	{
		cout<<"El numero mayor es: "<<n[0]<<endl;
	}
	else if (n[1] > n[0] && n[1] > n[2] && n[1] >n[3] && n[1] > n[4])
	{
		cout<<"El numero mayor es: "<<n[1]<<endl;
	}else 	if (n[2] > n[0] && n[2] > n[1] && n[2] > n[3] && n[2] > n[4])
	{
		cout<<"El numero mayor es: "<<n[2]<<endl;
	}	if (n[3] > n[0] && n[3] > n[1] && n[3] > n[2] && n[3] > n[4])
	{
		cout<<"El numero mayor es: "<<n[3]<<endl;
	}
	if (n[4] > n[0] && n[4] > n[1] && n[4] > n[2] && n[4] > n[3])
	{
		cout<<"El numero mayor es: "<<n[4]<<endl;
	}
	return 0;
}

