#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b, c, d, e, f;
	cout<<"te invitan a una fiesta ¿quieres ir ?"<<endl<<"1. si "<<endl<<"2. no";
	cin>>a; 
	if (a == 1)
	{
	cout<<"pide permiso, ¿te dieron permiso ?"<<endl<<"1. si "<<endl<<"2. no";
	cin>>b;
		if(b == 1)
		{
		cout<<"preparate hoy se sale, ¿quieres tomar hoy?"<<endl<<"1. si "<<endl<<"2. no";
		cin>>c;
		if(c == 1)
			{
			cout<<"tomaste mucho ?"<<endl<<"1. si "<<endl<<"2. no";
			cin>>d;
				if( d == 1) 
				{
				cout<<"pudiste llegar a casa ?"<<endl<<"1. si "<<endl<<"2. no";
				cin>>e; 
					if(e == 1)
					{
					cout<<"se dieron cuenta tus papas? "<<endl<<"1. si "<<endl<<"2. no";
					cin>>f;
						if(f == 1)
						{
						cout<<"me regañan";
						}
						else 
					   {
						cout<< "nada malo paso ";	
						}
					}
					else 
					{
					cout<<"black out"<<endl<<"amanece"<<endl<<"regresas y te castigan";
					}
				}
				else
				{
				cout<<"disfruto y regreso a casa";
				}
			
			
			}
			else
		   {
			cout<<"disfruto y regreso a casa ";
			}
		
		}
		else 
		{
		cout<<"no sales";
		}
	}
	else
	{
	 cout<<"no sales ";	
	}
	return 0;
}

