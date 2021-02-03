#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int casos;
    cin >> casos;
    cout << setprecision(3) << fixed;
    while (casos--)
    {
        int alunos, notas[1000], sum = 0, cont = 0;
        float media, result;
        cin >> alunos;
        for(int i = 0; i < alunos; i++)
        {
            cin >> notas[i];
            sum+=notas[i];
        }
        media = sum / alunos;
        for(int j = 0; j < alunos; j++)
        {
            if(notas[j] > media)
            {
                cont++;
            }
        }
        result = (cont * 100)/(alunos*1.0);
        cout << result << "%" << endl;
    }
    return 0;
}