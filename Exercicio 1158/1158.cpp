#include <iostream>
using namespace std;
int main()
{
    int casos, ent1, ent2, aux;
    cin >> casos;
    while (casos > 0)
    {
        cin >> ent1;
        cin >> ent2;
        aux = 0;
        if(ent1 % 2 == 0)
        {
            ent1+=1;
        }
        for(int i = 1; i <= ent2; i++)
        {
            aux += ent1;
            ent1 += 2;
        }
        cout << aux << endl;
        
        casos--;
    }

    return 0;
}