#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float soma = 0;
    cout << setprecision(2) << fixed;
    for(int i = 1; i < 101; i++)
    {
        soma += (1/(float)i);
    }
    cout << soma << endl;
    return 0;
}