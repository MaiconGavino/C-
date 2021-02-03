#include <iostream>
using namespace std;
int main()
{
    long long entA, entB;
    long long vet[21];
    vet[0] = 1;
    for(int i  = 1; i <= 20; i++)
    {
        vet[i] = vet[i-1]*i;
    }
    while (cin >> entA)
    {
        cin >> entB;
        cout << vet[entA]+vet[entB] << endl;
    }
    
    return 0;
}