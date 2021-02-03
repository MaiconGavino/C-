#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int casos, teste;
    long entrada;
    cin >> casos;
    while (casos--)
    {
        cin >> entrada;
        if(entrada == 0)
        {
            cout << "Not Prime" << endl;
            continue;
        }
        if(entrada == 1)
        {
            cout << "Not Prime" << endl;
            continue;
        }
        if (entrada == 2)
        {
            cout << "Prime" << endl;
            continue;
        }
        teste = 0;
        for(int i = 2; i < sqrt(entrada)+1; i++)
        {
            if(entrada % i == 0)
                teste++;
            if(teste == 2)
                break;
        }
        if(teste >= 1)
            cout << "Not Prime" << endl;
        else
            cout << "Prime" << endl;
    }
    
    return 0;
}