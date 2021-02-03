#include <iostream>
using namespace std;
int main()
{
    int pontoX, pontoY;
    while (true)    
    {
        cin >> pontoX;
        cin >> pontoY;
        if(pontoX == 0 || pontoY == 0)
        {
            break;
        }
        else if(pontoX > 0 && pontoY > 0)
        {
            cout << "primeiro" << endl;
        }
        else if(pontoX < 0 && pontoY > 0)
        {
            cout << "segundo" << endl;
        }
        else if(pontoX < 0 && pontoY < 0)
        {
            cout << "terceiro" << endl;
        }
        else
        {
            cout << "quarto" << endl;
        }
    }
    return 0;
}