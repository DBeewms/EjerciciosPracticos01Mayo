// Desarrollar un programa que imprima los números impares en orden
// descendente que hay entre 1 y 100.

Algoritmo numerosImpares
	Definir i Como Entero;
    Para i <- 100 Hasta 1 Con Paso -1 Hacer
        Si i MOD 2 <> 0 entonces
            Escribir i;
        FinSi
    FinPara
FinAlgoritmo