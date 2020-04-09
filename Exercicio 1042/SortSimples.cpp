/*
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em 
seguida, os valores na sequência como foram lidos.
Entrada = A entrada contem três números inteiros.
Saída = Imprima a saída conforme foi especificado. */

# include <iostream>
using namespace std;
int main()
{
    int entA, entB, entC;
    cin >> entA >> entB >> entC;
    if ( entA > entB && entB > entC)
    {
        cout << entC << endl;
        cout << entB << endl;
        cout << entA << endl;
        cout << endl;
        cout << entA << endl;
        cout << entB << endl;
        cout << entC << endl;
    }
    else if ( entA > entC && entC > entB)
    {
        cout << entB << endl;
        cout << entC << endl;
        cout << entA << endl;
        cout << endl;
        cout << entA << endl;
        cout << entB << endl;
        cout << entC << endl;
    }
    else if ( entB > entA && entA > entC)
    {
        cout << entC << endl;
        cout << entA << endl;
        cout << entB << endl;
        cout << endl;
        cout << entA << endl;
        cout << entB << endl;
        cout << entC << endl;
    }
    else if ( entB > entC && entC > entA)
    {
        cout << entA << endl;
        cout << entC << endl;
        cout << entB << endl;
        cout << endl;
        cout << entA << endl;
        cout << entB << endl;
        cout << entC << endl;
    }
    else if ( entC > entA && entA > entB)
    {
        cout << entB << endl;
        cout << entA << endl;
        cout << entC << endl;
        cout << endl;
        cout << entA << endl;
        cout << entB << endl;
        cout << entC << endl;
    }
    else
    {
        cout << entA << endl;
        cout << entB << endl;
        cout << entC << endl;
        cout << endl;
        cout << entA << endl;
        cout << entB << endl;
        cout << entC << endl;
    }
    return 0;
}