#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;
//todas las funciones
void C_arreglo(char arr[]);
void Skip(char arr[]);
int Factorial(int n);
void CrearTriangulo(int n);

int main() {
    int opcion;
    do {//menu
        cout << "----MENU----" << endl;
        cout << "1. Ordenamiento y omision en arreglos" << endl;
        cout << "2. Factoriales y figuras" << endl;
        cout << "3. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;
        cout << endl;
        switch (opcion) {//case1
        case 1: {
            cout << "Ordenamiento y omision en arreglos" << endl << endl;
            char arr[10];
            C_arreglo(arr);
            cout << "Arreglo original: ";
            for (int i = 0; i < 10; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            Skip(arr);
            cout << "Nuevo arreglo con caracteres ordenados y sin repetir: ";
            for (int i = 0; i < 10; i++) {
                if (arr[i] != '\0') {
                    cout << arr[i] << " ";
                }
            }
            cout << endl << endl;
            break;
        }//empieza case2
        case 2: {
            cout << "Factoriales y figuras." << endl << endl;
            int n;
            cout << "Ingrese el número a sacar el factorial: ";
            cin >> n;
            int fact = Factorial(n);
            cout << "Factorial de " << n << ": " << fact << endl;
            CrearTriangulo(fact);
            cout << endl;
            break;
        }//empieza case3
        case 3: {
            cout << "Saliendo del programa...vuelva pronto :)" << endl;
            break;
        }
        default: {
            cout << "Opcion invalida, intente de nuevo :(." << endl;
            break;
        }
        }
    } while (opcion != 3);

    return 0;
}
//crea el arreglo
void C_arreglo(char arr[]) {
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        arr[i] = 'a' + rand() % 26;
    }
}
//ordena y quita lo repetido
void Skip(char arr[]) {
    for (int i = 0; i < 10; i++) {
        if (arr[i] != '\0') {
            for (int j = i + 1; j < 10; j++) {
                if (arr[j] != '\0') {
                    if (arr[i] > arr[j]) {
                        swap(arr[i], arr[j]);
                    }else if (arr[i] == arr[j]) {
                        arr[j] = '\0';
                    }
                }
            }
        }
    }
}
//lo factorial
int Factorial(int n) {
    if (n == 0) {
        return 1;
    }else {
        return n * Factorial(n - 1);
    }
}
//crea el triangulo y lo imprime
void CrearTriangulo(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}