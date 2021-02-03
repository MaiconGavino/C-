#include <iostream>
using namespace std;
int main()
{
    int valor;
    cin >> valor;
    for(int i = valor; i < (valor + 12); i++)
    {
        if(i % 2 == 1)
        {
            cout << i << endl;
        }
    }
    return 0;
}