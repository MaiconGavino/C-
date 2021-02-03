#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float nota1, nota2, media;
    int aux = 1;
    cout << setprecision(2) << fixed;
    while (aux != 2)
    {
        if(aux == 1)
        {
            while (true)
            {
                cin >> nota1;
                if(nota1 < 0 || nota1 > 10)
                {
                    cout << "nota invalida" << endl;
                }
                else
                {
                    break;
                }
            }
            while (true)
            {
                cin >> nota2;
                if(nota2 < 0 || nota2 > 10)
                {
                    cout << "nota invalida" << endl;
                }
                else
                {
                    break;
                }
            }
            media = (nota1+ nota2)/2;
            cout << "media = " << media << endl;
        }
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> aux;
    }
    return 0;
}