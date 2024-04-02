#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1 = 0, n2= 1 , f, n;
	cout<<"a que numero quiere que llegue";
	cin>>n; 
	
	for (int x= 0; x <= n; x++)
	{
		cout <<"fibonacci numero: "<<x<<". "<<"Es: "<< n2 << endl;
		f = n1 + n2;
		n1 = n2;
		n2 = f;
	}

	
	return 0;
}

