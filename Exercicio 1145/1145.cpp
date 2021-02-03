#include <iostream>
using namespace std;
int main()
{
    int col, lin, aux = 1;
    cin >> col;
    cin >> lin;
    for (int i = 1; i <= lin; i++)
    {
        if(aux == col)
        {
            cout << i << endl;
            aux = 1;
        }
        else
        {
            cout << i << " ";
            aux++;
        }   
    }
    return 0;
}