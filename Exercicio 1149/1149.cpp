#include <iostream>
using namespace std;
int main()
{
    int entA, entN, soma = 0;
    while (cin >> entA)
    {
        cin >> entN;
        while (entN <= 0)
        {
            cin >> entN;
        }
        for(int i = 0; i < entN; i++)
        {
            soma += (entA + i);
        }
        cout << soma << endl;
        soma = 0;
    }
    
    return 0;
}