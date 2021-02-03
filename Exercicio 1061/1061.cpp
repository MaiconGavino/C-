#include <iostream>
using namespace std;
int main()
{
    int dia = 0, hrs = 0, min = 0, seg = 0;
    int diaF = 0, hrsF = 0, minF = 0, segF =0;
    char diaIn[4], pontos[3], dia1[4], pontos1[3];
    cin.get(diaIn, 4);
    cin >> dia;
    cin >> hrs;
    cin.get(pontos, 3);
    cin >> min;
    cin.get(pontos, 3);
    cin >> seg;
    cin.getline(diaIn, 0);
    cin.get(dia1, 4);
    cin >> diaF;
    cin >> hrsF;
    cin.get(pontos1, 3);
    cin >> minF;
    cin.get(pontos1, 3);
    cin >> segF;
    long duracao = (diaF*86400 + hrsF * 3600 + minF * 60 + segF) - (dia*86400 + hrs*3600 + min*60 + seg);
    cout << duracao / 86400 << " dia(s)" << endl;
    cout << (duracao % 86400)/3600 << " hora(s)" << endl;
    cout << ((duracao % 86400) % 3600) / 60 << " minuto(s)" << endl;
    cout << ((duracao % 86400)% 3600) % 60 << " segundo(s)" << endl;
    return 0;
}