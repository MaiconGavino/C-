#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char letra;
    int casos, quant, total = 0, rato = 0, coelho = 0, sapo = 0;
    float ratoPorc, coelhoPorc, sapoPorc;
    cin >> casos;
    for(int i = 0; i < casos; i++)
    {
        cin >> quant;
        cin >> letra;
        total += quant;
        switch (letra)
        {
        case 'C':
            coelho += quant;
            break;
        
        case 'S':
            sapo += quant;
            break;
        
        case 'R':
            rato += quant;
            break;
        }
    }
    coelhoPorc = (coelho * 100)/(float)total;
    sapoPorc = (sapo * 100)/(float)total;
    ratoPorc = (rato * 100)/(float)total;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;
    cout << fixed;
    cout << "Percentual de coelhos: " << setprecision(2) << coelhoPorc << " %" << endl;
    cout << "Percentual de ratos: " << setprecision(2) << ratoPorc << " %"<< endl;
    cout << "Percentual de sapos: " << setprecision(2) << sapoPorc << " %"<< endl;
    return 0;
}