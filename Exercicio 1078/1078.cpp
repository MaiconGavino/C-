#include <iostream>
using namespace std;
int main()
{
    int entrada, result;
    cin >> entrada;
    for(int i = 1; i < 11; i++)
    {
        result = i * entrada;
        cout << i << " x " << entrada << " = " << result << endl;
    }
    return 0;
}