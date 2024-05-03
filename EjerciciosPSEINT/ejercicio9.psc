// Diseña un programa que solicite al usuario ingresar dos matrices y
// luego realice la multiplicación de matrices. Asegúrate de que las
// dimensiones de las matrices sean compatibles para la multiplicación y
// muestra la matriz resultante.

Algoritmo multiplicarMatrices
    Definir filas, columnas, i, j Como Entero;
    Definir MAX Como Entero;
	Definir matriz1, matriz2, resultado Como Entero;
    Dimension matriz1[100, 100];
	Dimension matriz2[100, 100];
	Dimension resultado[100, 100];

    Escribir "Ingresa dos matrices para multiplicarlas...";
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

    Para i<-0 Hasta filas-1 Con Paso 1 Hacer
        Para j<-0 Hasta columnas-1 Con Paso 1 Hacer
            Escribir "Matriz 2";
            Escribir "Ingresa un numero, fila ", i+1, ", columna ", j+1, ":";
            Leer matriz2[i, j];
        FinPara
    FinPara

    Para i<-0 Hasta filas-1 Con Paso 1 Hacer
        Para j<-0 Hasta columnas-1 Con Paso 1 Hacer
            resultado[i, j] <- matriz1[i, j] * matriz2[i, j];
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

    Escribir "Matriz 2";
    Para i<-0 Hasta filas-1 Con Paso 1 Hacer
        Para j<-0 Hasta columnas-1 Con Paso 1 Hacer
            Escribir matriz2[i, j], Sin Saltar;
        FinPara
        Escribir "";
    FinPara

    Escribir "Producto de matrices";
    Para i<-0 Hasta filas-1 Con Paso 1 Hacer
        Para j<-0 Hasta columnas-1 Con Paso 1 Hacer
            Escribir resultado[i, j], Sin Saltar;
        FinPara
        Escribir "";
    FinPara

FinAlgoritmo
