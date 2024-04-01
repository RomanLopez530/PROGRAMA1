#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b, c, d, e, f;
	cout<<"es obligatorio ir a la Universidad? "<<endl<<"1. si"<<endl<<"2. no";
	cin>>a;
	if (a == 1) 
	{
		cout<<" te volviste a dormir ?"<<endl<<"1. si"<<endl<<"2. no";
		cin>>c;
		if ( c == 1)
		{
			cout<<"ya no fuiste ni modo otro dia sera ? ";
		}
		else 
		{
			cout<<"nos alistamos y vamos a la U"<<endl<<"hoy hay trafico? "<<endl<<"1. si"<<endl<<"2. no";
			cin>>d; 
			if(d == 1) 
			{
				cout<<"llegaste tarde, igual de irresponsable que siempre ";
			}
			else 
			{
				cout<<"llego rapido ? "<<endl<<"1. si"<<endl<<"2. no";
				cin>>e;
				if (e == 1)
				{
					cout<<"llegaste temprano";
				}
				else
				{
					cout<<"no llegaste rapido por que provocaste un accidente ?"<<endl<<"1. si"<<endl<<"2. no";
					cin>>f;
					if(f== 1)
					{
						cout<<"no llegaste a la U ests muerto ";
					}
					else 
					{
						cout<<"nos para la policia "<<endl<<"vas a la carcel y no vas a la u";	
					}
				}
			}
			
		}	
	}
	else 
	{
	cout<<"quiero ir? "<<endl<<"1. si"<<endl<<"2. no";
	cin>>b;
		if( b == 1) 
		{
		cout<<" te volviste a dormir ?"<<endl<<"1. si"<<endl<<"2. no";
		cin>>c;
			if ( c == 1)
			{
			cout<<"ya no fuiste ni modo otro dia sera ? ";
			}
			else 
			{
			cout<<"nos alistamos y vamos a la U"<<endl<<"hoy hay trafico? "<<endl<<"1. si"<<endl<<"2. no";
			cin>>d; 
				if(d == 1) 
				{
				cout<<"llegaste tarde, igual de irresponsable que siempre ";
				}
				else 
				{
				cout<<"llego rapido ? "<<endl<<"1. si"<<endl<<"2. no";
				cin>>e;
					if (e == 1)
					{
					cout<<"llegaste temprano";
					}
					else
					{
					cout<<"no llegaste rapido por que provocaste un accidente ?"<<endl<<"1. si"<<endl<<"2. no";
					cin>>f;
						if(f== 1)
						{
						cout<<"no llegaste a la U ests muerto ";
						}
						else 
						{
						cout<<"nos para la policia "<<endl<<"vas a la carcel y no vas a la u";	
						}
					}
				}
				
			}
			
			
		}
		else 
		{
		cout<<"sigue durmiendo";	
		}
	}
	return 0;
}

