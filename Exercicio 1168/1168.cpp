#include <iostream>
using namespace std;
int main()
{
    int casos, aux;
    long long leds;
    char entrada[101];
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> entrada;
        aux = 0;
        leds = 0;
        while (true)
        {
            if(entrada[aux]=='\0')
                break;
            if(entrada[aux]=='1')
                leds+=2;
            if(entrada[aux]=='2')
                leds+=5;
            if(entrada[aux]=='3')
                leds+=5;
            if(entrada[aux]=='4')
                leds+=4;
            if(entrada[aux]=='5')
                leds+=5;
            if(entrada[aux]=='6')
                leds+=6;
            if(entrada[aux]=='7')
                leds+=3;
            if(entrada[aux]=='8')
                leds+=7;
            if(entrada[aux]=='9')
                leds+=6;
            if(entrada[aux]=='0')
                leds+=6;
            aux++;
        }
        cout << leds << " leds" << endl;
    }
    
    return 0;
}