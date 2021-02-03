#include <iostream>
using namespace std;
int main()
{
    int result, veloc, temp;
    
    while (cin >> veloc)
    {
        cin >> temp;
        result = veloc * (temp * 2);
        cout << result << endl;
    }
    
    return 0;
}
