#include <iostream>
using namespace std;
int main()
{
    int casos, entrada, in = 0, out = 0;
    cin >> casos;
    for(int i = 0; i < casos; i++)
    {
        cin >> entrada;
        if(entrada >= 10 && entrada <= 20)
        {
            in += 1;
        }
        else
        {
            out += 1;
        }
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}