#include <iostream>
using namespace std;
int main()
{
    int senha;
    while (true)
    {
        cin >> senha;
        if(senha != 2002)
        {
            cout << "Senha Invalida" << endl;
        }
        else if(senha == 2002)
        {
            cout << "Acesso Permitido" << endl;
            break;
        }
    }
    
    return 0;
}