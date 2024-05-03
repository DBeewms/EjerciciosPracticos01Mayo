// Escriba el programa para calcular la suma de los cuadrados de los
// números entre 1 y 100.

Algoritmo sumaCuadrados
    Definir suma, i Como Entero;
    suma <- 0;

    Para i <- 1 Hasta 99 Hacer
        Escribir suma, " + ", i, " ^2 ", " = " Sin Saltar;
        suma <- suma + i^2;
        Escribir suma;
    FinPara

FinAlgoritmo