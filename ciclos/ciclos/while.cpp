#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1 = 9, num2 = 9;
	while (num1 > -1 )
	{
		cout<<"el numero es: "<<num1<<endl;
		num1 --;
	}
	do 
	{
		cout<<"el otro numero es: "<<num2<<endl;
		num2 --;
	} while(num2 > -1);
	return 0;
}

