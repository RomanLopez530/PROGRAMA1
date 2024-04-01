#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num2;
	cout<<"ingrese un numero: ";
	cin>>num2;
	for ( int num1 =  0; num1 <11; num1 ++)
	{
		cout<<num1<<" * "<<num2<<"= "<<num1 *num2<<endl;
	}
	return 0;
}

