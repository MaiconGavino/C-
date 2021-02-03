#include <iostream>
using namespace std;
int main()
{
    int casos, entA, entB, result;
    cin >> casos;
    while (casos--)
    {
        cin >> entA;
        cin >> entB;
        result = (entA*entB)/2;
        cout << result << " cm2" << endl;
    }
    
    return 0;
}