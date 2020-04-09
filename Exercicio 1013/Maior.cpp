/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a 
fórmula:

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no 
resultado esperado.
Entrada = O arquivo de entrada contém três valores inteiros.
Saída = Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".*/

# include <iostream>
# include <math.h>
# include <iomanip>
using namespace std;
int main(){
    int primValor, segValor, tercValor, maior, maiorABC;
    cin >> primValor >> segValor >> tercValor;
    maior = (primValor + segValor + abs(primValor - segValor))/2;
    maiorABC = (maior + tercValor + abs(maior - tercValor))/2;
    cout << maiorABC << " eh o maior" << endl;
    return 0;
}
