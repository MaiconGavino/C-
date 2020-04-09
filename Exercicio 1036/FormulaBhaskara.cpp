/* Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, 
mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada = Leia três valores de ponto flutuante (double) A, B e C.

Saída = Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado 
das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha 
após cada mensagem.
*/

# include <iostream>
# include <math.h>
#include <iomanip>
using namespace std;
int main(){
    double entA, entB, entC, delta, raiz1, raiz2;
    cin >> entA >> entB >> entC;
    delta = pow(entB, 2) - (4*entA*entC);
    if (entA != 0 && delta >=0)
    {
        raiz1 = (-entB + sqrt (delta))/(2*entA);
        raiz2 = (-entB - sqrt (delta))/(2*entA);
        
        cout << fixed << setprecision(5);
        cout << "R1 = " << setprecision(5) << raiz1 << endl;
        cout << "R2 = " << setprecision(5) << raiz2 << endl;
    }
    else
    {
        cout << "Impossivel calcular"<<endl;
    }
    return 0;
}