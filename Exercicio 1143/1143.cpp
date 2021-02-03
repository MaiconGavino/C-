#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int entrada, aux = 0;
    cin >> entrada;
    for(int i = 0; i < entrada; i++)
    {
        aux += 1;
        cout << aux << " " << pow(aux, 2) << " " << pow(aux, 3) << endl;
    }
    return 0;
}