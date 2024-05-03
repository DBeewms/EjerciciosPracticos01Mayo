#include <iostream>

using namespace std;

const int NUM_ESTUDIANTES = 10;

int main()
{
    float promedio = 0;
    float notas[NUM_ESTUDIANTES];

    for (int i = 0; i < NUM_ESTUDIANTES; i++)
    {
        cout << "Nota final del estudiante #" << i + 1 << ": ";
        cin >> notas[i];
        promedio += notas[i];
    }

    promedio /= NUM_ESTUDIANTES;

    cout << "Promedio de toda la clase: " << promedio << endl;

    return 0;
}