#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int ins, beca;
	cout<< "ingrese el metodo de inscripcion: "<<endl ;
	cout << "1. CUI o DPI" << endl;
	cout << "2. Pasaporte" << endl;
	cin >> ins;
	cout << "Ingrese si tiene beca o no: " << endl;
	cout << "1. Si" << endl;
	cout << "0. No" << endl;
	cin >> beca;
	if (ins > 0 || beca == 0)
	{
	 cout<<"bienvenido a Mesoamericana ";
	}
	else 
	{
		cout<<"complete su inscripcion ";
	}
	
	return 0;
}

