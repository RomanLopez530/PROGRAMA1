#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char a, c;
	cout<<"Ingrese una letra: ";
	cin>>a;
	for( char c= 65; c <= 90; c++)
	{

	
	if ( a == c)
	{
		cout<<"la letra es mayuscula: "<<a;
		break;
	}
	else 
	{
		
		
		for( char c= 97; c <= 122; c++)
		{
			
			if ( a == c)
			{
				cout<<"la letra es minusculas: "<<a;
				break;
				
			}
		}	
		
	}
	}		

	return 0;
}

