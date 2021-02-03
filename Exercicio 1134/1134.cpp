#include <iostream>
using namespace std;
int main()
{
    int alcool = 0, gasolina = 0, diesel = 0, aux = 0;
    while(aux != 4)
    {
        cin >> aux;
        if(aux > 0 && aux < 4)
        {
            switch (aux)
            {
            case 1:
                alcool +=1;
                break;
            
            case 2:
                gasolina += 1;
                break;
            case 3:
                diesel += 1;
                break;
            }
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
    return 0;
}