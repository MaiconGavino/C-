#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int casos;
    float valor1, valor2, valor3, media;
    cin >> casos;
    cout << setprecision(1) << fixed;
    for(int i = 0; i < casos; i++)
    {
        cin >> valor1;
        cin >> valor2;
        cin >> valor3;
        media = ((valor1 * 2 + valor2 *3 + valor3 * 5)/ (2.0 + 3.0 +5.0));
        cout << media << endl;
    }
    return 0;
}