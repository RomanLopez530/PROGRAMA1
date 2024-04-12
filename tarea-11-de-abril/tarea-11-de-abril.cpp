#include <iostream>
using namespace std;
void mensaje1 ()
{
	cout<<"HOLA";
}
void mensaje2 ()
{
	cout<<"COMO ESTAS? ";
}
void mensaje3 ()
{
	cout<<"ESTA BIEN";
}
void mensaje4 ()
{
	cout<<"COMO TE SIENTES";
}
void mensaje5 ()
{
	cout<<"ADIOS";
}
int main(int argc, char *argv[]) {
	int n;
	cout<<"MENU"<<endl; 
	cout<<"1. escribe HOLA"<<endl;
	cout<<"2. escribe COMO ESTAS?"<<endl;
	cout<<"3. escribe ESTA BIEN"<<endl;
	cout<<"4. escribe COMO TE SIENTES?"<<endl;
	cout<<"5. escribe ADIOS"<<endl;
	cin>>n;
	switch (n)
	{
case 1: 
	mensaje1();
break;
	case 2: 
		mensaje2();
		break;
	case 3: 
		mensaje3();
		break;
	case 4: 
		mensaje4();
		break;
	case 5: 
		mensaje5();
		break;
	default:
	cout<< "no es una opccion";
	break;
	}
	return 0;
}

