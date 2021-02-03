#include <iostream>
using namespace std;
int main()
{
    int entrada;
    cin >> entrada;
    for(int i = 0; i < 10000; i++)
    {
        if( i % entrada == 2)
        {
            cout << i << endl;
        }
    }
    return 0;
}