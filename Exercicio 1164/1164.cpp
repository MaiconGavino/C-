#include <iostream>
using namespace std;
int main()
{
    int casos, entrada, aux, soma, result;
    cin >> casos;
    while (casos > 0)
    {
        cin >> entrada;
        aux = 0;
        for (int i = 1; i < entrada; i++)
        {
            if (entrada % i == 0)
            {
                aux += i;
                if (aux > entrada)
                {
                    break;
                }
            }
        }
        if (aux == entrada)
        {
            cout << entrada << " eh perfeito" << endl;
        }
        else
        {
            cout << entrada << " nao eh perfeito" << endl;
        }

        casos--;
    }

    return 0;
}