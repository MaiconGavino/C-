#include <iostream>
using namespace std;
int main()
{
    int entrada, aux = 0;
    cin >> entrada;
    for(int i = 0; i < entrada; i++)
    {
        cout << aux+1 << " " << aux+2 << " " << aux + 3 << " PUM" << endl;
        aux += 4;
    }
    return 0;
}