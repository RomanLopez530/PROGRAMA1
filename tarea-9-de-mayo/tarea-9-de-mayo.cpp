#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double n[4];
	for( int i = 0; i < 5;i++)
	{
		cout<<"ingrese el numero "<<i+1<<"°:"<<endl;
		cin>>n[i];
	}
	double r = n[0]+n[1]+n[2]+n[3]+n[4];
	cout<<"la suma total es: "<<r;
	return 0;
}

