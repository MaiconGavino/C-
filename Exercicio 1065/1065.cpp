#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int cont = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if(arr[i] % 2 == 0)
        {
            cont += 1;
        }
    }
    cout << cont << " valores pares" << endl;
    return 0;
}