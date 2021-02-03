#include <iostream>
using namespace std;
int main()
{
    int aux = 0, entrada, cont;
    while (true)
    {
        cin >> entrada;
        if(entrada == -1)
            break;
        cont = 0;
        aux++;
        while (entrada > 1)
        {
            cont++;
            entrada -= 2;
        }
        cout << "Experiment " << aux << ": " << cont << " full cycle(s)" << endl;
    }
    return 0;
}