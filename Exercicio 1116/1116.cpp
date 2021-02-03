#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int casos;
    float ent1, ent2;
    cin >> casos;
    cout<<setprecision(1)<<fixed;
    for(int i = 0; i < casos; i++)
    {
        cin >> ent1;
        cin >> ent2;
        if(ent2 == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            cout << ent1 / ent2 << endl;
        }
    }
    return 0;
}