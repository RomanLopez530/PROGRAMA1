#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int o, arreg[10], arreg1[5],arreg2[5],arreg3[10],e,arreg5[5];
	double arreg4[5], arreg6[5];
	while(o != 5){
	cout<<"Menu"<<endl;
	cout<<"------------------------------------------------------------------"<<endl;
	cout<<"1. llenar un arreglo de atras para adelante"<<endl;
	cout<<"2. clonar un arreglo"<<endl;
	cout<<"3. ingresar 10 numeros"<<endl;
	cout<<"4. 5 numeros decimales"<<endl;
	cout<<"5. salir "<<endl;
	cin>>o;
	switch(o)
	{
	case 1:
		for (int i = 9; i >= 0 ; i--) {
			cout << "Ingrese un numero " << endl;
			cin >> arreg[i];
		}
		for(int a = 0; a < 10; a++){
			cout<<"El numero en la casilla "<<a<<" es: "<<arreg[a] <<endl;
		}
	break;
	case 2: 
		for (int a = 0; a < 5 ; a++) {
			cout << "Ingrese un numero " 
				<< a << endl;
			cin >> arreg1[a];
		}
		
		for(int a = 0; a < 5; a++){
			arreg2[a]= arreg1[a];
			cout<<"El numero "<< a <<" esta en la posicion "<<arreg2[a]<<endl;
		}
	case 3:
			for (int a = 0; a < 10; a++){
				cout<<"Ingrese un numero:"<<a<<endl;
				cin>>arreg3[a];
				
				
			}
			for(int a = 0; a < 10; a++){				
				if(arreg3[a] < 0){
				e= arreg3[a] * -1;
				cout<<"El numero "<<e<<" esta en la posicion "<<a<<endl;
			}
			else{
				cout<<"El numero "<<arreg3[a]<<" esta en la posicion "<<a<<endl;
			}

			}
			
	break;
	case 4:
		for (int a = 0; a < 5; a++){
			cout<<"Ingrese un numero entero con decimales:"<<a<<endl;
			cin>>arreg4[a];
			
			arreg5[a]=arreg4[a];
			arreg6[a]= arreg4[a] - arreg5[a];
			
			cout<<"El valor entero es:"<<arreg5[a]<<endl;
			cout<<"El valor decimal es:"<<arreg6[a]<<endl;
		}
	case 5:
		cout<<"ADIOS";
	break;
	break;
	default:
		cout<<"no es un opicion ";
	break;
	}	
	} 
	return 0;
}

