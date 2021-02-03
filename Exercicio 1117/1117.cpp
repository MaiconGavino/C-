#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float nota1, nota2, media;
    cout << setprecision(2) << fixed;
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
    media = (nota1+nota2)/2;
    cout << "media = " << media << endl;
    return 0;
}