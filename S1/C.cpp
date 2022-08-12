/*
C - A Sepo le encantan las matrices

Sepo tiene una pasión culposa, le encantan las matrices de 5 × 5, que contienen 24 ceros y un solo número uno. 
Las filas de la matriz se indexan de arriba a abajo contando desde 1 hasta 5, y las columnas se indexan de 
izquierda a derecha contando desde 1 hasta 5.

En un moviento, puedes hacer una de las siguientes operaciones:

Intercambiar 2 filas adyacentes, es decir, filas con índices i y i + 1 para algún entero i (1 ≤ i < 5).
Intercambar 2 columnas adyacentes, es decir, columnas con índices j y j + 1 para algún entero j (1 ≤ j < 5).
Sepo encuentra una matriz bonita, si su único número 1 está justo en el centro (en la celda de la tercera fila, 
de la tercera columna). Sepo quiere saber la mínima cantidad de movimientos que necesita hacer para que una 
matriz dada sea bonita.

Input
El input consiste de 5 líneas, cada una contiene 5 enteros: el j-ésimo entero en la i-ésima línea del input 
corresponde al valor de la celda en la fila i y la columna j. La matriz siempre está compuesta por 24 ceros y 
exactamente 1 uno.

Output
Imprime un único entero — la cantidad de movimientos necesarios que la matriz sea bonita.
*/

#include <iostream>

using namespace std;

int main() {
    int in = 0;
    int i  = -1;

    while (in-1) {
        cin >> in;
        i += 1;
    }
    for (int j = 0; 24-i>j; j++) cin >> in;
    int resx = abs((i%5 + 1) - 3); 
    int resy = abs((i/5 + 1) - 3);

    cout << resx+resy;

    return 0;
}