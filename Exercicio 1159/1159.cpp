#include <iostream>
using namespace std;
int main()
{
    int entrada, aux, soma;
    while (true)
    {
        cin >> entrada;
        soma = 0;
        if(entrada == 0)
        {
            break;
        }
        if(entrada % 2 == 0)
        {
            soma = entrada;
        }
        else
        {
            soma = ++entrada;
        }
        for (int i = 1 ; i < 5; i++)
        {
            entrada += 2;
            soma += entrada;
        }  
        cout << soma << endl;
    }
    return 0;
}