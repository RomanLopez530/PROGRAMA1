#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double n[9], b;
	for( int i = 0; i < 10;i++)
	{
		cout<<"ingrese el numero "<<i+1<<"°:"<<endl;
		cin>>n[i];
	}
	cout<<"cual es numero que busca: ";
	cin>>b;
	if(b == n[0] || b == n[1] || b == n[2] || b == n[3] || b == n[4] || b == n[5] || b == n[6]|| b == n[7]|| b == n[8]|| b == n[9]  ){
		cout<<"felicidades si existe el numero";
	}else{
		cout<<"mala suerte";
	}
	return 0;
}

