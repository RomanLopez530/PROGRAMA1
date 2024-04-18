#include <iostream>
#include <math.h>
#include <cstdlib>
	
using namespace std;
void vuelto(){
	int no = 0;
	do{
	float t,q1,q5,q10,q20,q50,q100,q200,t2, t3,tr;
	cout<<"ingrese el total gastado: ";
	cin>>t;
	cout<<"billetes cuantos billetes de 1 quetzal dio?: ";
	cin>>q1;
	cout<<"billetes cuantos billetes de 5 quetzal dio?: ";
	cin>>q5;
	cout<<"billetes cuantos billetes de 10 quetzal dio?: ";
	cin>>q10;
	cout<<"billetes cuantos billetes de 20 quetzal dio?: ";
	cin>>q20;
	cout<<"billetes cuantos billetes de 50 quetzal dio?: ";
	cin>>q50;
	cout<<"billetes cuantos billetes de 100 quetzal dio?: ";
	cin>>q100;
	cout<<"billetes cuantos billetes de 200 quetzal dio?: ";
	cin>>q200;
	t2= (q1 * 1)+(q5 * 5)+(q10 * 10)+(q20 * 20)+(q50 * 50)+(q100 * 100)+(q200 * 200);
	
	if( t <= t2)
	{
		t3= t2 - t;
		cout<<"su vuelto es de: "<<t3;
	}
	else{
		cout<<" no es suficiente dinero, desea volver a intentarlo:"<<endl<<"1.si"<<endl<<"2.no";
		cin>>tr;
		if (tr == 1){
		no = 1;
		}else{
			no= 0;
		}
	}
	}while(no == 1);
}
int factorial(int n)
{
	int factorial = 1;
	for (int i = 1; i <= n; ++i) {
		factorial *= i;
	}
	return factorial;
}
void menu1(){
	
	int o, n;
	float c, opu,h;
	cout<<"Menu"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"1.calcular hipotenusa"<<endl;
	cout<<"2.calcular del angulo faltante de triangulo"<<endl;
	cout<<"3.calcular el factorial de un numero"<<endl;
	cout<<"4.calcular de dinero"<<endl;
	cin>>o;
	switch(o){
	case 1: 
	cout<<"ingrese el adyecente: "<<endl;
	cin>>c;
	cout<<"ingrese el opuesto: "<<endl;
	cin>>opu;
	h= sqrt(pow(c,2)+pow(opu,2));
	cout<<"La hipotenusa es: "<<h<<endl;
	break;
	case 2:
	cout<<"no lo pude realizar lo siento :( "<<endl;
	break;
	case 3:
	cout<<"ingrese un numero para calcular su factorial";
	cin>>n;
	cout << "El factorial es " << factorial(n) << endl;
	break;
	
	case 4:
	vuelto();
	break;
	
	default:
	cout<<"No es una opcion >:v";
	break;
	}
	}
	

int main(int argc, char *argv[]) {
	int r;
	do{
	system("cls");
menu1();
 cout<<"____________________________________________________________________"<<endl;
 cout<<"Desea repetir el programa? "<<endl;
 cout<<"1. si"<<endl;
 cout<<"2. no"<<endl;
 cout<<"elija una opcion: "<<endl;
 cin>>r;
	}while( r == 1);
	cout<<endl<<endl;
	cout<<"____________________________________________________________________"<<endl;
	cout<<"Orale con cuidado, Feliz noche"<<endl;
	
	return 0;
}

