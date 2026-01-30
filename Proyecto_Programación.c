#include <iostream>

using namespace std;

int main(){
	char opcion;
	
	cout << "\tSistema de Control de estudiantes en un Taller" << endl;
	cout <<"\nNo se poseen datos de estudiantes, desea ingresarlos? S/N: ";
	cin >> opcion;
	
	while(opcion != 's' && opcion != 'S' && opcion != 'n' && opcion != 'N'){
			
			cout << "\nPor favor ingrese una opcion valida (S o N): ";
            cin >> opcion;
		}

return 0;
}
