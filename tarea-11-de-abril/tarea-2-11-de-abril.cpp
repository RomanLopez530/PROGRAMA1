#include <iostream>
#include <cstdlib>
using namespace std;
	int n; 
	string p;
	char l;
	void numero(int n){
	cout<<"ingrese un numero: ";
	cin>>n;
	cout<<"el numero que ingreso es: "<<n<<endl;
	}
	void palabra(string p){
		cout<<"Ingrese una palabra: ";
		cin>>p;
		cout<<"la palbra que ingreso es: "<<p<<endl;
	}
	void letra(char l){
	cout<<"Ingrese una letra: ";
	cin>>l;
	cout<<"la letra que ingreso es: "<<l<<endl;
	}
	
int main(int argc, char *argv[]) {
	int o, c = 0;
	do
	{
	system("cls");
	cout<<"Menu"<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"1. imprimir un numero"<<endl;
	cout<<"2. imprimir una palabra"<<endl;
	cout<<"3. imprimir una letra"<<endl;
	cin>>o;
	cout<<"-----------------------------------------------------------------"<<endl;
	
	switch (o)
	{
	case 1:
	numero( n);
	break;
	case 2: 
	palabra(p);
	break;
	case 3:
	letra(l);
	break;
	default:
	cout<<"no es una opccion valida"<<endl;
	break;
	}
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"Dese continuar con el codigo?"<<endl;
	cout<<"1. si"<<endl;
	cout<<"2. no"<<endl;
	cin>>c;
	if( c < 1 || c > 2)
	{
	cout<<"-----------------------------------------------------------------"<<endl;	
	cout<<"no es una opccion valida"<<endl;
	cout<<"se podra como opccion determinada 2";
	c = 2;
	}
	}while(c == 1);
	return 0;
}

