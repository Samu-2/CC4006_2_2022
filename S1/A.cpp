/*
A - Sapo y Sepo aman las sandías

Un caluroso día de verano, Sapo y Sepo decidieron comprar una sandía. Eligieron la más grande y madura que pudieron encontrar, en su opinión. 
Luego, la subieron a una pesa, la cual marcó ww kilos.

Al intentar dividirla en dos partes, una para cada uno, se toparon con un problema difícil. Sapo y Sepo son fanáticos de los números pares, 
así que quieren dividirla en dos partes de forma que ambas pesen una cantidad par de kilos, pero no es necesario que sean iguales.

Sapo y Sepo tienen muchas ganas de comerse la sandía, pero necesitan de tu ayuda para poder partirla! Dado el peso de la sandía ww, 
tu misión es decir si es posible dividirla de la forma que quieren o no.
s
Entrada
La única línea de la entrada consiste en un número entero ww (1 \leq w \leq 1001≤w≤100), indicando el peso en kilos de la sandía que compraron Sapo y Sepo.

Salida
Imprime YES si pueden dividir la sandía en dos sandías, cada una pesando una cantidad par de kilos, y NO en el caso contrario.

Ejemplo
Entrada	Salida 
8
YES

Explicación
Por ejemplo, Sapo y Sepo podrían dividir la sandía de peso 8 en dos partes de 2 y 6 kilos, o en dos partes de 4 y 4 kilos. Nota que siempre trabajamos con números enteros, pues un número decimal no puede ser par.
*/

#include <iostream>

using namespace std;

int main() {
    int w; cin >> w;
    
    if (w < 4 || w%2) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}