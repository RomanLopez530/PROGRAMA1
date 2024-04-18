#include <iostream>
#include <windows.H>
#include <cstdlib>
using namespace std;
int o,  r = 0;
void gotoxy (int x, int y){
COORD coord;
coord.X= x;
coord.Y= y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void menu1(){
	
	int coordx, coordy, n;
	string pb;
	cout<<"Menu 1"<<endl;
	cout<<"____________________________________________________________________"<<endl;
	cout<<"1. imprimir 'hola mundo' "<<endl;
	cout<<"2. imprimir un numero "<<endl;
	cout<<"3. imprimir una palabra "<<endl;
	cout<<"elija una opcion: "<<endl;
	cout<<"____________________________________________________________________"<<endl; 
	cin>>o;
	switch(o){
		
		case 1:
		system("cls");
		cout<<"ingrese las coordenadas en X: ";
		cin>>coordx;
		cout<<"ingrese las coordenadas en Y: ";
		cin>>coordy;
		gotoxy(coordx,coordy);
		cout<<"Hola Mundo"<<endl;
		break;
		
		case  2:
		cout<<"ingrese un numero: ";
		cin>>n;
		gotoxy(70,20);
		cout<<n<<endl;
		break;
		case 3:
		cout<<"ingrese una palabra: "<<endl;
		cin>>pb;
		coordx = 6;
		coordy = 9;
		
		for(int c= 1; c <= 10; c++){
			coordx= coordx + 5 - c;
			coordy= coordy + 1;
			gotoxy(coordx, coordy);
			cout<<pb<<endl;
			}
		break;
		default:
		cout<<"NO ES UNA OPCION >:/ "<<endl;
		break;
	
	}

}
	
void menu2(){
	string nom;

	cout<<"Menu 2"<<endl;
	cout<<"____________________________________________________________________"<<endl;
	cout<<"1. imprimir un caracter Ascii "<<endl;
	cout<<"2. saludar "<<endl;
	cout<<"elija una opcion: "<<endl;
	cin>>o;
	cout<<"____________________________________________________________________"<<endl;
	switch(o){
		case 1:
		gotoxy(30,30);
		cout<<char(21)<<endl;
		break;
		case 2:
		cout<<"¿A quien desea saludar ? ";
		cin>>nom; 
		
		cout<<"hola "<<nom<<" ten un bonito dia :D "<<endl;
		cout<< "  ***   ***" <<endl;
		cout<< " ***** *****" <<endl;
		cout<< "*************" <<endl;
		cout<< " *********** " <<endl;
		cout<< "  *********  " <<endl;
		cout<< "   *******   " <<endl;
		cout<< "    *****    " <<endl;
		cout<< "     ***     " <<endl;
		cout<< "      *      " <<endl;
		break;
		default:
		cout<<"NO ES UNA OPCION >:/ "<<endl;
		break;
	}
}
		
int main(int argc, char *argv[]) {
	int i = 1;
	
	cout<<"A que menu desea ir? "<<endl;
	cout<<"1. menu 1"<<endl;
	cout<<"2. menu 2"<<endl;
	cout<<"elija una opcion: "<<endl;
	cin>>i;
	
do{
		
			switch(i){
			case 1:
			system("cls");
			menu1 ();
			break;
			case 2:
			system("cls");
			menu2 ();
			break;
			default:
			cout<<"NO ES UNA OPCION >:/ "<<endl;
			break;
			}
	
		cout<<"____________________________________________________________________"<<endl;
		cout<<"Desea repetir el programa? "<<endl;
		cout<<"1. si"<<endl;
		cout<<"2. no"<<endl;
		cout<<"elija una opcion: "<<endl;
		cin>>r;
		
			if( r == 1){
			i = 0;
			cout<<"____________________________________________________________________"<<endl;
			cout<<"A que menu desea ir? "<<endl;
			cout<<"1. menu 1"<<endl;
			cout<<"2. menu 2"<<endl;
			cout<<"elija una opcion: "<<endl;
			cin>>i;
			}
}while( r == 1);
	cout<<endl<<endl;
	cout<<"____________________________________________________________________"<<endl;
	cout<<"Orale con cuidado, Feliz noche"<<endl;

	return 0;
}
