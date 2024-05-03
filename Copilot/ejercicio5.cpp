#include <iostream>

int main()
{
    const int numEstudiantes = 8;
    float promedio = 0;
    int aprobados = 0, reprobados = 0;
    float notas[numEstudiantes];

    for (int i = 0; i < numEstudiantes; i++)
    {
        std::cout << "Nota final del estudiante #" << i+1 << ": ";
        std::cin >> notas[i];

        if (notas[i] >= 70)
            aprobados++;
        else
            reprobados++;
        
        promedio += notas[i];
    }
    promedio /= numEstudiantes;

    std::cout << "Aprobados: " << aprobados << std::endl;
    std::cout << "Reprobados: " << reprobados << std::endl;
    std::cout << "Promedio de toda la clase: " << promedio << std::endl;

    return 0;
}