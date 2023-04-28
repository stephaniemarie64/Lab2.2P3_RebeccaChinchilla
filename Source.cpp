#include <iostream>

using namespace std;

int main() {
    int opcion;
    // menus
    do {
        cout << "---- MENU ----" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            //case 1
        case 1:
            cout << "Ha seleccionado la opcion 1." << endl;
            break;
            //case 2
        case 2:
            cout << "Ha seleccionado la opcion 2." << endl;
            break;
            //case 3
        case 3:
            cout << "Saliendo del programa. Muchas gracias :)" << endl;
            break;
        default:
            cout << "Opcion invalida. Intente otra vez :(" << endl;
        }

        cout << endl;
    } while (opcion != 4);

    return 0;
}
