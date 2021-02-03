#include <iostream>
using namespace std;
int main()
{
    int ent1, ent2, soma, aux=0, cont = 0;
    cin >> ent1;
    while (true)
    {
        cin >> ent2;
        if(ent1 < ent2)
        {
            break;
        }
    }
    soma = 0;
    while (soma <= ent2)   
    {
        aux = ent1;
        soma += aux;
        ent1 = aux + 1;
        cont ++;
    }
    cout << cont << endl;
    return 0;
}
