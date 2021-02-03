#include <iostream>
using namespace std;
int main()
{
    int valor;
    cin >> valor;
    for(int i = 1; i <= valor; i++)
    {
        if(i % 2 == 1)
        {
            cout << i << endl;
        }
    }
    return 0;
}