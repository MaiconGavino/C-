#include <iostream>
using namespace std;
int main()
{
    int entrada, prod = 1;
    cin >> entrada;
    for(int i = 1; i <= entrada; i++)
    {
        prod *= i;
    }
    cout << prod << endl;
}