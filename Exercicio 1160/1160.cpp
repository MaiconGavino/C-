#include <iostream>
using namespace std;
int main()
{
    int casos, populacaoA, populacaoB, anos = 0, cidA, cidB;
    float taxa1, taxa2;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> populacaoA;
        cin >> populacaoB;
        cin >> taxa1;
        cin >> taxa2;
        cidA = 0;
        cidB = 0;
        anos = 0;
        while (cidA <= cidB)
        {
            populacaoA += (populacaoA*taxa1)/100;
            cidA = populacaoA;
            populacaoB += (populacaoB*taxa2)/100;
            cidB = populacaoB;
            anos+=1;
            if(anos > 100)
            {
                break;
            }
        }
        if(anos > 100)
        {
            cout << "Mais de 1 seculo." << endl;
        }
        else
        {
            cout << anos << " anos." << endl;
        }
    }
    return 0;
}