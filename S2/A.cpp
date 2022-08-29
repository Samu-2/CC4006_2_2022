/*
En la Mona se juega Mega Crush Fiends con unas reglas algo especiales (y para nada inventadas):

Se juegan exactamente N rondas.
En cada ronda cada uno de los participantes recibe una puntuación entre 0 y 100.
La puntuación final de cada participante equivale a sus mejores n - floor{n/4} puntajes

Por ejemplo, si se jugaron n = 9n=9 rondas y un participante obtuvo los puntajes: 33, 52, 100, 
0, 96, 58, 70, 87 y 74. Entonces, se eliminarían sus 2 peores puntajes, el primero y el 
cuarto, por lo que su puntaje final sería 52 + 100 + 96 + 58 + 70 + 87 + 74 = 537

Acaba de terminar el enfrentamiento entre el DCC y el DIE, con un resultado claramente favorable
para el DCC, pero ahora Salas se hace esta pregunta: ¿Cuántas rondas más deberían jugarse para 
que el DIE pudiera (hipóteticamente) superar o igualar al DCC?, una pregunta con severas 
implicancias filosóficas.

Salas necesita la respuesta, así que tú le ayudarás creando un programa que la resuelva para 
varios casos de prueba.

Input
El input consiste de varios casos de prueba, la primera línea contiene la cantidad de casos T (1≤t≤1000).
La primera línea de cada caso de prueba contiene un entero nn (1≤n≤10^5) — la cantidad de rondas jugadas.
La segunda línea contiene N enteros e_1, e_2, e_3, ⋯, e_n (0≤e_i≤100) — los puntajes en cada ronda 
obtenidos por el DIE.
La tercera línea contiene nn enteros c_1, c_2, c_3, ⋯, c_n (0≤c_i≤100) — los puntajes en cada ronda 
obtenidos por el DCC.

Output
Por cada caso de prueba imprime un único entero — la mínima cantidad de rondas extras que deberían 
jugarse para que el puntaje total del DIE sea mayor o igual al puntaje total del DCC.

Notar que es posible el hipotético caso donde el DIE le haya ganado al DCC, en cuyo caso, imprime 00.
*/

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int sumaMS(multiset<int> &ms, int k){
    auto begin = ms.begin();
    auto end   = prev(ms.end());

    cout << *begin << endl << *end << endl; 

    return 0;
}

int main() {
    int t; cin >> t;
    for (int i=0; i<t; i++){
        int n; cin >> n;

        multiset<int> dcc;
        for (int j=0; j<n; j++){
            int in; cin >> in;
            dcc.insert(in);
        }

        sumaMS(dcc, 1);

        multiset<int> die;
        for (int j=0; j<n; j++){
            int in; cin >> in;
            die.insert(in);
        }

    }
    return 0;
}