#include <iostream>
using namespace std;
int main()
{
    int ent1, ent2, casos, aux;
    cin >> casos;
    while (true)
    {
        if(casos == 0)
        {
            break;
        }
        cin >> ent1;
        cin >> ent2;
        if(ent1 > ent2)
        {
            aux = ent1;
            ent1 = ent2;
            ent2 = aux;
        }
        int soma = 0;
        for(int i = ent1+1; i < ent2; i++)
        {
            if(i%2 !=0)
            {
                soma += i;
            }
        }
        cout << soma << endl;
        casos--;
    }
    return 0;
}