#include <iostream>
using namespace std;
int main()
{
    int baseA, baseB, Tp1, Tp2;
    int altura = 70, base1 = 160, base2 = 160;
    cin >> baseA;
    cin >> baseB;
    base1 = base1 - baseA;
    base2 = base2 - baseB;
    Tp1 = ((baseA+baseB)*altura)/2;
    Tp2 = ((base1+base2)*altura)/2;
    if (Tp1 < Tp2)
        cout << 2 << endl;
    else  if (Tp2 < Tp1)
        cout << 1 << endl;
    else
    {
        cout << 0 << endl;
    }
    
    return 0;
}