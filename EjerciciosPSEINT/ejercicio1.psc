// Dado un n�mero natural n se desea calcular la suma de los n�meros
// naturales desde 1 hasta n. Codifica el programa que resuelva este
// planteamiento.

Algoritmo sumaNumerosNaturales
    Definir num, suma, i como Entero;
    Escribir "Dime un numero y calculare la suma de todos los numeros hasta llegar a tal numero...";
    Leer num;

    suma <- 0;
    Para i <- 1 Hasta num Hacer
        Escribir suma, " + ", i, " = " Sin Saltar;
        suma <- suma + i;
        Escribir suma;
    FinPara

FinAlgoritmo