// Realice un programa que permita calcular y dar como salida el
// promedio general de una sección, tomando en cuenta que está
// compuesta por 10 estudiantes y que se tiene la nota de cada uno de
// ellos.

Algoritmo promedioClase
    Definir promedio Como Real;
	Definir i Como Entero;
	Definir notas Como Real;
    Dimension notas[10];
	
	promedio <- 0;
	
    Para i<-0 Hasta 9 Con Paso 1 Hacer
        Escribir "Nota final del estudiante #", i+1, ": ";
        Leer notas[i];
        promedio <- promedio + notas[i];
    FinPara
    promedio <- promedio / 10;
    Escribir "Promedio de toda la clase: ", promedio;
FinAlgoritmo