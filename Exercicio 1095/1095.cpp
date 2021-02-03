#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 60;
    while (j != 0)
    {
        cout <<"I=" << i << " " << "J=" << j << endl;
        j -= 5;
        i += 3;
    }
    cout << "I=? J=0" << endl;
    
    return 0;
}