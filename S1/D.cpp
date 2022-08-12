/*
D - Emilia y el cerco

Emilia y sus amigas están caminando por el lado de un cerco de madera de altura h y 
no quieren que el guardia al otro lado las vea. Para lograr esto, la altura de cada una
 de ellas no debe superar h. Si la altura de cualquier persona es estríctamente mayor 
 a h, esta puede agacharse de forma que no la verán. La altura de la i-ésima persona 
 es igual a a_i
i
​
El ancho de una persona caminando normalmente es 1, mientras que el de una persona 
agachada es 22. Las amigas quieren ir conversando, así que caminarán una al lado de otra. 
¿Cuál es el ancho mínimo de la vereda, de forma que pueden caminar una al lado de otra 
sin que las vean?

Entrada
La primera línea de la entrada consiste en dos enteros n y h (10001≤n≤1000, 
1 ≤ h ≤ 1000), el número de personas y la altura del cerco, respectivamente.

La segunda línea contiene n enteros a_i
​(1≤ a_i ≤2h) separados por espacios, donde el número a_i
​
es igual a la altura de la i-ésima persona.

Salida
Imprime un solo número entero: el ancho mínimo de la vereda.
*/

#include <iostream>

using namespace std;

int main() {
    int n, h, in; cin >> n >> h;
    int ret = 0;

    for (int i=0; n>i; i++) {
        cin >> in;
        ret += (in > h) ? 2 : 1;
    }

    cout << ret;
    return 0;
}