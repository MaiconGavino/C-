#include <iostream>
using namespace std;
int main()
{
    int casos, teste, aux = 0;
    cin >> casos;
    for(int i = 0; i < casos; i++)
    {
        cin >> teste;
        for(int j = 1; j <= teste; j++)
        {
            if(teste % j == 0)
            {
                aux++;
            }
        }
        if(aux == 2)
        {
            cout << teste << " eh primo" << endl;
            aux = 0;
        }
        else
        {
            cout << teste << " nao eh primo" << endl;
            aux = 0;
        }
        
    }
    return 0;
}