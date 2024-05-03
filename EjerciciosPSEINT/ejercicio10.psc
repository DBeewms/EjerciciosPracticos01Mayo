// Implementa un programa que solicite al usuario ingresar una matriz y
// luego calcule su transposición. La transposición de una matriz se
// realiza intercambiando filas por columnas. Imprime la matriz
// transpuesta como salida.

Algoritmo transponerMatriz
    Definir filas, columnas, i, j Como Entero;
    Definir matriz1 Como Entero;
    Dimension matriz1[100, 100];

    Escribir "Ingresa una matriz para transponerla...";
    Escribir "Numero de filas: ";
    Leer filas;
    Escribir "Numero de columnas: ";
    Leer columnas;

    Para i<-0 Hasta filas-1 Con Paso 1 Hacer
        Para j<-0 Hasta columnas-1 Con Paso 1 Hacer
            Escribir "Matriz 1";
            Escribir "Ingresa un numero, fila ", i+1, ", columna ", j+1, ":";
            Leer matriz1[i, j];
        FinPara
    FinPara

    Escribir "";
    Escribir "Matriz 1";
    Para i<-0 Hasta filas-1 Con Paso 1 Hacer
        Para j<-0 Hasta columnas-1 Con Paso 1 Hacer
            Escribir matriz1[i, j], Sin Saltar;
        FinPara
        Escribir "";
    FinPara

    Escribir "Transposicion...";
    Para i<-0 Hasta columnas-1 Con Paso 1 Hacer
        Para j<-0 Hasta filas-1 Con Paso 1 Hacer
            Escribir matriz1[j, i], Sin Saltar;
        FinPara
        Escribir "";
    FinPara
    
FinAlgoritmo
