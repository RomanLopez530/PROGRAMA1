#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Ganadores(char totito[3][3], int gar){
	int i;
	//validar filas
	for(i =0; i < 3; i++){
		if((totito[i][0] == totito[i][1]) && (totito[i][0] == totito[i][2])){
			if (totito[i][0] == 'X'){
				if (gar == 1){
					return 1;
				}
				else
				{
					return 2;
				}
			}
			if (totito[i][0] == 'O'){
				if (gar == 2){
					return 1;
				}
				else
				{
					return 2;
				}
			}
		}
	}
	//validar columnas
	for(i =0; i < 3; i++){
		if((totito[0][i] == totito[1][i]) && (totito[0][i] == totito[2][i])){
			if (totito[0][i] == 'X'){
				if (gar == 1){
					return 1;
				}
				else
				{
					return 2;
				}
			}
			if (totito[0][i] == 'O'){
				if (gar == 2){
					return 1;
				}
				else
				{
					return 2;
				}
			}
		}
	}
	if((totito[0][0] == totito[1][1]) && (totito[0][0] == totito[2][2])){
		if (totito[0][0] == 'X'){
			if (gar == 1){
				return 1;
			}
			else
			{
				return 2;
			}
		}
		if (totito[0][0] == 'O'){
			if (gar == 2){
				return 1;
			}
			else
			{
				return 2;
			}
		}
	}
	
	else if((totito[2][0] == totito[1][1]) && (totito[2][0] == totito[0][2])){
		if (totito[2][0] == 'X'){
			if (gar == 1){
				return 1;
			}
			else
			{
				return 2;
			}
		}
		if (totito[2][0] == 'O'){
			if (gar == 2){
				return 1;
			}
			else
			{
				return 2;
			}
		}
	}
	return 0;
}
	
	void MatriTotito(char totito[3][3]){
		for (int j=0; j <3; j++){
			for (int k=0; k <3; k++){
				cout<<totito[j][k];
				if(k != 2){
					cout<<" | ";
				}
			}
			if(j != 2){
				cout<<endl<<"---------";
			}
			cout<<endl;
		}
	}
		
		int main(int argc, char *argv[]) {
			
			string nom, nom2, x1,o1;
			int n,o,lugar,repetir = 1,gar;
			char sim;
			srand(time(0));
			
			//elejir jugadores
			cout<<" Bienvenido Listo para jugar TOTITO :D"<<endl;
			cout<<"----------------------------------------------"<<endl;
			cout<<"Ingrese el nombre del jugador 1 "<<endl;
			cin>>nom;
			cout<<"Ingrese el nombre del jugador 2 "<<endl;
			cin>>nom2;
			cout<<"----------------------------------------------"<<endl;
			cout<<" Quien es x ?"<<endl;
			cout<<" 1."<<nom<<endl;
			cout<<" 2."<<nom2<<endl;
			cin>>o;
			switch(o){
			case 1:
				x1 = nom;
				o1 = nom2;
				break;
				
			case 2:
				o1 = nom;
				x1 = nom2;
				break;
			default:
				cout<<"----------------------------------------------"<<endl;
				x1 = nom;
				o1 = nom2;
				cout<<" no es una opcion "<<endl;
				cout<<x1<<" sera X"<<endl;
				break;
			}
			while(repetir == 1){
				int round = 0, ganador = 0 ;
				
				cout<<"----------------------------------------------"<<endl;
				n = 1 + rand() % 6;
				cout<<"el dado tiro: "<<n<<endl;
				//empiez x	
				
				if ( n % 2 == 0){
					cout<<"----------------------------------------------"<<endl;
					cout<<" Empieza X, Empieza: "<<x1<<endl;
					char totito[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
					while(round < 9){
						
						MatriTotito(totito);
						if(round % 2 == 0){
							sim = 'X';
							cout<<"Turno de X "<<x1<<endl;
						}
						else{
							sim = 'O';
							cout<<"Turno de O "<<o1<<endl;
						}
						cout<<"Donde desea jugar ? "<<endl;
						cin>>lugar;
						// casos de x o O//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
						switch(lugar){
						case 1:
							if(totito[0][0] == '1'){
								totito[0][0] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 2:
							if(totito[0][1] == '2'){
								totito[0][1] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 3:
							if(totito[0][2] == '3'){
								totito[0][2] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 4:
							if(totito[1][0] == '4'){
								totito[1][0] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 5:
							if(totito[1][1] == '5'){
								totito[1][1] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 6:
							if(totito[1][2] == '6'){
								totito[1][2] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 7:
							if(totito[2][0] == '7'){
								totito[2][0] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 8:
							if(totito[2][1] == '8'){
								totito[2][1] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 9:
							if(totito[2][2] == '9'){
								totito[2][2] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						default:
							cout<<"no es una opccion >:l"<<endl;
							break;
						}
						cout << endl;
						system("cls");
						ganador = Ganadores(totito,gar);
						if(ganador != 0){
							round = 9;
							MatriTotito(totito);
						}
					}
				}
				
				else{
					cout<<"----------------------------------------------"<<endl;
					cout<<" Empieza O, Empieza: "<<o1<<endl;	
					char totito[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
					while(round < 9){
						
						MatriTotito(totito);
						if(round % 2 == 0){
							sim = 'O';
							cout<<"Turno de O "<<x1<<endl;
						}
						else{
							sim = 'X';
							cout<<"Turno de X "<<o1<<endl;
						}
						cout<<"Donde desea jugar ? "<<endl;
						cin>>lugar;
						// casos de x o O//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
						switch(lugar){
						case 1:
							if(totito[0][0] == '1'){
								totito[0][0] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 2:
							if(totito[0][1] == '2'){
								totito[0][1] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 3:
							if(totito[0][2] == '3'){
								totito[0][2] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 4:
							if(totito[1][0] == '4'){
								totito[1][0] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 5:
							if(totito[1][1] == '5'){
								totito[1][1] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 6:
							if(totito[1][2] == '6'){
								totito[1][2] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 7:
							if(totito[2][0] == '7'){
								totito[2][0] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 8:
							if(totito[2][1] == '8'){
								totito[2][1] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						case 9:
							if(totito[2][2] == '9'){
								totito[2][2] = sim;
								round ++;
							}
							else 
							{
								cout<<" Posicion ya usada :b "<<endl;
								system("pause");
							}
							break;
						default:
							cout<<"no es una opccion >:l"<<endl;
							break;
						}
						cout << endl;
						system("cls");
						ganador = Ganadores(totito,gar);
						if(ganador != 0){
							round = 9;
							MatriTotito(totito);
						}
					}
					
				}
				
				if (ganador == 0)
				{
					cout << endl << "Hubo un empate" << endl;
				}
				else if (ganador == 1)
				{
					cout << endl << "Gano: "<< x1 <<  endl;
				} else if (ganador == 2)
				{
					cout << endl << "Gano: "<< o1 <<  endl;
				}
				cout<<"desea volver a jugar ? "<<endl;
				cout<<"1. si "<<endl;
				cout<<"2. no "<<endl;
				cin>>repetir;
				system("cls");
			}
			cout<<"ADIOS TEN UN BUEN DIA :D"<<endl;	
			cout<< "   /\\  /\\   \n";
			cout<< "  /  \\/  \\  \n";
			cout<< " /        \\ \n";
			cout<< " \\        / \n";
			cout<< "  \\      /  \n";
			cout<< "   \\    /   \n";
			cout<< "    \\  /    \n";
			cout<< "     \\/     \n";
			return 0;
		}
		
		
