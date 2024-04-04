#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int c= 0, o;
	float n1,n2, r;
	do{
	 cout<<"---------calculadora---------"<<endl;
	cout<<"¿Que operación desea realizar? "<<endl; 
	cout<<"1.suma "<<endl;	
	cout<<"2.Resta "<<endl;	
	cout<<"3.Multiplicación"<<endl;	
	cout<<"4.Division "<<endl;	
	cin>>o;
	cout<<"----------------------------------------------"<<endl;
	switch(o){
	case 1:
		cout<<"ingrese el primer numero: ";
		cin>>n1;
		cout<<"ingrese el segundo numero: ";
		cin>>n2;
		r= n1 + n2;
		cout<<"El resultado es: "<<r<<endl;
		break;
	case 2:
		cout<<"ingrese el primer numero: ";
		cin>>n1;
		cout<<"ingrese el segundo numero: ";
		cin>>n2;
		r= n1 - n2;
		cout<<"El resultado es: "<<r<<endl;
		break;
	case 3:
		cout<<"ingrese el primer numero: ";
		cin>>n1;
		cout<<"ingrese el segundo numero: ";
		cin>>n2;
		r= n1 * n2;
		cout<<"El resultado es: "<<r<<endl;
		break;
	case 4:
		cout<<"ingrese el primer numero: ";
		cin>>n1;
		cout<<"ingrese el segundo numero: ";
		cin>>n2;
		r= n1 / n2;
		cout<<"El resultado es: "<<r<<endl;
		break;
	default:
		cout << "No es una operacion valida"<<endl;
		break;
		
	
	
	}
	cout<<"----------------------------------------------"<<endl;
	cout<<"¿desea volver a ejecutar el progrmaa?"<<endl;
	cout<<"1.si"<<endl<<"2.no"<<endl;
	cin>>c;
	cout<<"----------------------------------------------"<<endl;
	} while(c==1);
	cout<<"a finalizado el programa";
	return 0;
}

