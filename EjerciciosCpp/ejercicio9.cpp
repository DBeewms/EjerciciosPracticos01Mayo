// Diseña un programa que solicite al usuario ingresar dos matrices y
// luego realice la multiplicación de matrices. Asegúrate de que las
// dimensiones de las matrices sean compatibles para la multiplicación y
// muestra la matriz resultante.

#include <iostream>

#define MAX 100

using namespace std;

int main(int argc, char const *argv[])
{
    int filas, columnas;

    cout << "Ingresa dos matrices para multiplicarlas..." << endl;
    cout << "Numero de filas: ";
    cin >> filas;
    cout << "Numero de columnas: ";
    cin >> columnas;
    
    int matriz1[MAX][MAX];
    int matriz2[MAX][MAX];
    int resultado[MAX][MAX];

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Matriz 1" << endl;
            cout << "Ingresa un numero, fila " << i+1 << ", columna " << j+1 << ":"<< endl;
            cin >> matriz1[i][j];
        }
        
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Matriz 2" << endl;
            cout << "Ingresa un numero, fila " << i+1 << ", columna " << j+1 << ":"<< endl;
            cin >> matriz2[i][j];
        }
        
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            resultado[i][j] = matriz1[i][j] * matriz2[i][j];
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

    cout << "Matriz 2" << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Producto de matrices" << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << resultado[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}
