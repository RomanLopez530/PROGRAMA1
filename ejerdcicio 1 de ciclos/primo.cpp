#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n, r1= 0 ;
	cout<<"ingrese un numero: ";
	cin>> n;
	
	for( int n2=1; n2 <= n; n2 ++)
	{
	 if ( n % n2 == 0 )
	 {
		 r1++;
		 cout<<"el numero es divisible por: "<<n2<<endl;
	 }
	 
	}
	if (r1 <=2)
	{
		cout<<"el numero es primo";		
	}
	else {
		cout<<"el numero no es primo";
	}
	return 0;
}

