#include <iostream>
using namespace std;
int main()
{
    int entrada;
    cin >> entrada;
    for(int i = 1; i <= entrada; i++)
    {
        cout << i << " " << i*i << " " << i*i*i << endl;
        cout << i << " " << i*i+1 << " " << i*i*i+1 << endl;
    }
    return 0;
}