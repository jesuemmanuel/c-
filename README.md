//ingresas el caracter deseado y lo que quieres ingresar, una vez hecho eso imprimira un marco con el caracter que ingresaste y dentro del marco la palabra ingresada


#include <iostream>
using namespace std;

int main() {
    // Solicitar el título y el carácter al usuario
    string titulo;
    char caracter;

    cout << "Ingrese el título: ";
    getline(cin, titulo);

    cout << "Ingrese el carácter de enmarcado: ";
    cin >> caracter;

    // Determinar el ancho del marco
    int ancho = titulo.length() + 4;

    // Imprimir el marco superior
    for (int i = 0; i < ancho; i++) {
        cout << caracter;
    }
    cout << endl;

    // Imprimir el título enmarcado
    cout << caracter << " " << titulo << " " << caracter << endl;

    // Imprimir el marco inferior
    for (int i = 0; i < ancho; i++) {
        cout << caracter;
    }
    cout << endl;

    return 0;
}
