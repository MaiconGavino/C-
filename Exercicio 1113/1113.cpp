#include <iostream>
using namespace std;
int main()
{
    int entX, entY;
    while(true)
    {
        cin >> entX;
        cin >> entY;
        if(entX == entY)
        {
            break;
        }
        if(entX < entY)
        {
            cout << "Crescente" << endl;
        }
        else
        {
            cout << "Decrescente" << endl;
        }
    }
    return 0;
}