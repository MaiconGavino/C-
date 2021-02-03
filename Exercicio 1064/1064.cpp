#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float arr[6], aux = 0;
    int cont = 0;
    for(int i = 0; i < 6; i++)
    {
        cin >> arr[i];
        if(arr[i] > 0)
        {
            cont= cont + 1;
            aux += arr[i];
        }
    }
    cout << cont << " valores positivos" << endl;
    cout << setprecision(2) << aux / cont << endl;
}