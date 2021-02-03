#include <iostream>
using namespace std;
int main()
{
    int j, aux;
    for(int i = 1; i < 10; i+=2)
    {
        aux = 3;
        j = 7;
        while (aux > 0)
        {
            cout << "I=" << i << " J=" << j << endl;
            j -= 1;
            aux--;
        }
    }
    return 0;
}