/* Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se 
os valores lidos são múltiplos entre si.
Entrada = A entrada contém valores inteiros.
Saída = A saída deve conter uma das mensagens conforme descrito acima.
*/

# include <iostream>
using namespace std;
int main()
{
   int entA, entB, mult, mult1;
    cin >> entA >> entB;
    mult1 = entA%entB;
    mult = entB%entA;
    if(mult == 0 || mult1 == 0)
    {
        cout << "Sao Multiplos" << endl;
    }
    else
    {
        cout << "Nao sao Multiplos"<< endl;
        
    }
    return 0;
}
