/* Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e 
terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.
Entrada = A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.
Saída = Apresente a duração do jogo conforme exemplo abaixo. */


# include <iostream>
using namespace std;
int main()
{
    int entA, entB, tempo;
    cin >> entA >> entB;
    if (entA >= entB)
    {
        tempo= 24 - (entA - entB);
        cout << "O JOGO DUROU " << tempo <<" HORA(S)" << endl;
    }
    else
    {
        tempo = entB - entA;
        cout << "O JOGO DUROU " << tempo <<" HORA(S)" << endl;
    }
    return 0;
}