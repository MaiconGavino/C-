#include <iostream>
using namespace std;
int main()
{
    int ent1, ent2, aux;
    cin >> ent1;
    cin >> ent2;
    if(ent2 < ent1)
    {
        aux = ent1;
        ent1 = ent2;
        ent2 = aux;
    }
    for(int i = ent1+1; i < ent2; i++)
    {
        if(i % 5 == 2 || i % 5 == 3)
        {
            cout << i << endl;
        }
    }
    return 0;
}