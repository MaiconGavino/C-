#include <iostream>
using namespace std;
int main()
{
    int entrada, secFib[46];
    cin >> entrada;
    secFib[0] = 0;
    secFib[1] = 1;

    cout << secFib[0] << " " << secFib[1] << " ";
    for(int i = 2; i < entrada; i++)
    {
        secFib[i] = secFib[i-1] + secFib[i-2];
        if(i < (entrada - 1))
        {
            cout << secFib[i] << " ";
        }
        else
        {
            cout << secFib[i] << endl;
        }
        
    }
    return 0;
}