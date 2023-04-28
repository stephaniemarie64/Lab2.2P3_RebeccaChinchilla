#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
// lo que hace el factorial
int Factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * Factorial(n - 1);
    }
}
// lo que hace el triangulo
void CrearTriangulo(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int opcion;
    // lo que hace el menu
    do {
        cout << "---- MENU ----" << endl;
        cout << "1. Ordenamiento y omisión en arreglos" << endl;
        cout << "2. Factoriales y figuras." << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {// case 1
        case 1:
            cout << "Ordenamiento y omisión en arreglos" << endl;

            char caracteres[10];
            char caracteresOrdenados[26] = { 0 };
            int indice = 0;

            srand(time(NULL));
            for (int i = 0; i < 10; i++) {
                caracteres[i] = rand() % 26 + 97;
            }

            cout << "Arreglo original: ";
            for (int i = 0; i < 10; i++) {
                cout << caracteres[i] << " ";
            }
            cout << endl;

            for (int i = 0; i < 10; i++) {
                caracteresOrdenados[caracteres[i] - 97] = caracteres[i];
            }

            cout << "Arreglo ordenado: ";
            for (int i = 0; i < 26; i++) {
                if (caracteresOrdenados[i] != 0) {
                    cout << caracteresOrdenados[i] << " ";
                    indice++;
                }
            }
            cout << endl;
            break;
            // empieza case 2
        case 2:
            cout << "Factoriales y figuras." << endl;
            int n;
            do {
                cout << "Ingrese un entero positivo: ";
                cin >> n;
            } while (n < 0);
            //se llama el factorial
            int factorial = Factorial(n);
            cout << "Factorial de " << n << " = " << factorial << endl;
            //se llama el triangulo
            CrearTriangulo(factorial);
            break;
        // empieza case 3
        case 3:
            cout << "Saliendo del programa. Muchas gracias :)" << endl;
            break;

        default:
            cout << "Opcion invalida. Intente otra vez :(" << endl;
        }

        cout << endl;
    } while (opcion != 3);

    return 0;
}