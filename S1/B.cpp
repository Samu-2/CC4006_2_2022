/*
B - Palabras larguísimamente largas

A veces, algunas palabras como "caleidoscopio" o "paralelepipedo" son tan largas que escribirlas puede ser agotador.

Consideremos una palabra como muy larga si su largo es estríctamente mayor a 10 caracteres. Todas estas palabras
deben ser reemplazadas con una abreviación especial.

Esta abreviación se construye de la siguiente forma: escribimos la primera y última letra de la palabra, y entre 
ellas colocamos el número de letras entre la primera y la última letra. Este número está en sistema decimal y se
escribe sin ceros a la izquierda.

Por ejemplo, "caleidoscopio" se escribiría "c11o" y "paralelepipedo" se escribiría como "p12o".

Tu tarea es automatizar el proceso de abreviar estas palabras. Todas las palabras que cumplan el criterio de muy 
largas deben ser abreviadas, mientras que las otras no deben tener ningún cambio.

Entrada
La primera línea de la entrada consiste en un entero nn (1 \leq n \leq 1001≤n≤100). Cada una de las siguientes nn 
líneas contienen una palabra. Todas las palabras consisten en letras latinas minúsculas (por eso paralelepípedo está 
sin tilde!) y poseen un largo entre 11 y 100100 caracteres.

Salida
Imprime nn líneas. La ii-ésima línea debe contener el resultado de procesar la ii-ésima palabra
*/

#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for (int i=0; n>i; i++) {
        string w; cin >> w;
        int l = w.length();
        if (l <= 10) cout << w << endl;
        else {
            cout << w[0] << l - 2 << w[l-1] << endl;
        }
    }
    return 0;
}
