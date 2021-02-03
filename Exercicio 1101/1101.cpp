#include <iostream>
using namespace std;
int main()
{
    int ent1, ent2, aux, soma;
    while(true)
    {
        cin >> ent1;
        cin >> ent2;
        if(ent1 <= 0 || ent2 <= 0)
        {
            break;
        }
        if(ent1 > ent2)
        {
            aux = ent1;
            ent1 = ent2;
            ent2 = aux;
        }
        soma = 0;
        for(int i = ent1; i <= ent2; i++)
        {
            cout << i << " ";
            soma += i;
        }
        cout << "Sum=" <<soma << endl;
    }
    return 0;
}