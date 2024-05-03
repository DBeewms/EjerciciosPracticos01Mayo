// Hacer un programa que sume los números pares comprendidos entre
// 100 y 200.

Algoritmo sumaNumerosPares
    Definir suma, i Como Entero;
    suma <- 0;

    Para i<-100 Hasta 200 Con Paso 1 Hacer
        Si i MOD 2 = 0 Entonces
            Escribir suma, " + ", i, " = ", Sin Saltar;
            suma <- suma + i;
            Escribir suma;
        FinSi
    FinPara
FinAlgoritmo