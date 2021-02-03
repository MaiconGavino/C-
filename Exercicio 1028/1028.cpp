/*#include <iostream>
using namespace std;
int main()
{
    int entA, entB, casos, aux, result = 0;
    cin >> casos;
    for(int i = 0; i < casos; i++)
    {
        cin >> entA;
        cin >> entB;
        aux = 0;
        if(entA > entB)
        {
            aux = entA;
            entA = entB;
            entB = aux;
        }
        for(int i = 1; i <= entA; i++)
        {
            if(entA % i == 0)
            {
                if (entB % i == 0)
                result = i;
            }
        }
        cout << result << endl;
    }
    return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int entA, entB, casos, aux, result;
    cin >> casos;
    for(int i = 0; i < casos; i++)
    {
        cin >> entA;
        cin >> entB;
        aux = 0;
        result = 0;
        if(entA > entB)
        {
            aux = entA;
            entA = entB;
            entB = aux;
        }
        while (entB % entA != 0)    
        {
            result = entB % entA;
            entB = entA;
            entA = result;
        }
        
        cout << entA << endl;
    }
    return 0;
}