#include <iostream>
using namespace std;
int main()
{
    int aux;
    float i = 0, j = 1;
    for(int k = 0; k < 11; k++)
    {
        aux = 3;
        while (aux > 0)
        {
            cout << "I=" << i << " j=" << j << endl;
            aux--;
            j++;
        }
        j-= 3;
        j+= 0.2;
        i+= 0.2;
    }
    return 0;
}