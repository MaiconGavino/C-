#include <iostream>
using namespace std;
int main()
{
    int j = 7, aux;
    for(int i = 1; i < 10; i+=2)
    {
        aux = 3;
        
        while (aux > 0)
        {
            cout << "I=" << i << " J=" << j << endl;
            j -= 1;
            aux--;
        }
        j += 5;
    }
    return 0;
}
