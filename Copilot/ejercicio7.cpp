#include <iostream>
#include <vector>

using namespace std;

int main() {
    int longitud;

    cout << "Ingresa 2 vectores para calcular su suma..." << endl;
    cout << "Dime la longitud del vector: ";
    cin >> longitud;

    vector<int> array1(longitud);
    vector<int> array2(longitud);
    vector<int> array3(longitud);

    cout << "Arreglo 1" << endl;
    for (int i = 0; i < longitud; i++) {
        cout << "Dime un numero: ";
        cin >> array1[i];
    }

    cout << "Arreglo 2" << endl;
    for (int i = 0; i < longitud; i++) {
        cout << "Dime un numero: ";
        cin >> array2[i];
    }

    cout << endl;
    for (int i = 0; i < longitud; i++) {
        array3[i] = array1[i] + array2[i];
        if (i == longitud - 1) {
            cout << array3[i];
        } else {
            cout << array3[i] << ", ";
        }
    }

    return 0;
}