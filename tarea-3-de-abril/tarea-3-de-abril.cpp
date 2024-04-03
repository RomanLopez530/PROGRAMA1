#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

		int n1 = 0;
		cout << "ingrese un numero: ";
		cin >> n1;
		
		switch(n1) {
		case 1:
			cout << "area comun";
			break;
		case 3:
			cout << "area comun";
			break;
		case 5:
			cout << "area especifica";
			break;
		case 7:
			cout << "area especifica";
			break;
		default:
			cout << "no nos encontramos en ese semestre";
			break;
		}

	return 0;
}

