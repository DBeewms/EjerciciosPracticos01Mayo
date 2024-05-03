// Implementa un programa que solicite al usuario ingresar una matriz y
// luego calcule su transposición. La transposición de una matriz se
// realiza intercambiando filas por columnas. Imprime la matriz
// transpuesta como salida.

#include <iostream>
#define MAX 100

using namespace std;

int main(int argc, char const *argv[])
{
    int filas, columnas;

    cout << "Ingresa una matriz para transposicionarla..." << endl;
    cout << "Numero de filas: ";
    cin >> filas;
    cout << "Numero de columnas: ";
    cin >> columnas;
    
    int matriz1[MAX][MAX];

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Matriz 1" << endl;
            cout << "Ingresa un numero, fila " << i+1 << ", columna " << j+1 << ":"<< endl;
            cin >> matriz1[i][j];
        }
        
    }

    cout << endl;
    cout << "Matriz 1" << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Transposicion..." << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz1[j][i] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}
