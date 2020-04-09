

/*Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada = Quatro números inteiros representando a hora de início e fim do jogo.

Saída = Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
*/

#include <iostream>
using namespace std;
int main(){
    int hrsIni,minInic, hrsFim, minFim, hrs, min, tempInic, tempoFim;
    cin >> hrsIni >> minInic >> hrsFim>> minFim;
    tempInic = hrsIni * 60 + minInic;
    tempoFim = hrsFim * 60 + minFim;
    if (tempInic >= tempoFim){
        hrsFim = hrsFim + 24;
        tempInic = hrsIni * 60 + minInic;
        tempoFim = hrsFim * 60 + minFim;
        tempoFim = tempoFim - tempInic;
        hrs = tempoFim / 60;
        min = tempoFim % 60;
        cout << "O JOGO DUROU " << hrs << " HORA(S) " << "E " << min << " MINUTO(S)" << endl;
     }
     else if (tempoFim = tempoFim - tempInic){
         hrs = tempoFim / 60;
         min = tempoFim % 60;
       cout << "O JOGO DUROU " << hrs << " HORA(S) " << "E " << min << " MINUTO(S)" << endl;
     }
    
    return 0;
}