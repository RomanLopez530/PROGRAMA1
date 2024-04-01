#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, r, r1= 0 ;
	cout<<"ingrese un numero: "; 
	cin>> num1;
	r= num1 % 2;
	if(r == 0)
	{
		for(int num2= 0; num2 <= num1; num2 ++)
		{
		
		if(num2 % 2== 0) {
		cout<<num2<<" + " <<r1;
		r1= num2 + r1;
		cout<<"= " <<r1<<endl;
		}
		}
	}
	else{
		for(int num2= 0; num2 <= num1; num2 ++)
		{
			if(num2 % 2 != 0) {
				cout<<num2<<" + " <<r1;
				r1= num2 + r1;
				cout<<"= " <<r1<<endl;
			}
		}
	}
	
		
			
			
			
		return 0;
}

