/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no 
formato horas:minutos:segundos.
Entrada = O arquivo de entrada contém um valor inteiro N.
Saída = Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.*/

# include <iostream>
using namespace std;
int main(){
     int entradaSeg, hrs, hrSeg, min, seg;
     hrSeg =3600;
     cin >> entradaSeg;
     hrs = entradaSeg / hrSeg;
     min = (entradaSeg - ( hrSeg * hrs)) / 60;
     seg =entradaSeg - ( hrSeg * hrs) - (min * 60);
     cout << hrs <<":" << min << ":" << seg << endl;
    return 0;
}