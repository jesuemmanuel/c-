#include using namespace std;

int main() { // Solicitar el t�tulo y el car�cter al usuario string titulo; char caracter;

cout << "Ingrese el t�tulo: ";
getline(cin, titulo);

cout << "Ingrese el car�cter de enmarcado: ";
cin >> caracter;

// Determinar el ancho del marco
int ancho = titulo.length() + 4;

// Imprimir el marco superior
for (int i = 0; i < ancho; i++) {
    cout << caracter;
}
cout << endl;

// Imprimir el t�tulo enmarcado
cout << caracter << " " << titulo << " " << caracter << endl;

// Imprimir el marco inferior
for (int i = 0; i < ancho; i++) {
    cout << caracter;
}
cout << endl;

return 0;
}
