#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int entrada;
    cin >> entrada;
    for(int i = 1; i <= entrada; i++)
    {
        if(i % 2 == 0)
        {
            int resut = pow(i,2);
            cout << i << "^2 = " << resut << endl;
        }
    }
    return 0;
}