/*
Implemente uma função que receba como parâmetro de entrada dois numeros inteiros
que serão sempre maiores do que zero. A função a ser implementada deve calcular o
MMC e o MDC entre os dois valores de entradas, e gerar o resultado do calculo como 
saida.
*/
#include <iostream>

using namespace std;
int operador(int value1, int value2){
    int mmc = 0, mdc = 0, aux = 1;
    for(int i=1; i<=value2; i++){
        if(value1%i == 0 && value2%i==0)
            mdc = i;
    }
    while(aux != 0){
        mmc += value2;
        if(mmc % value1 == 0)
        {
            aux = 0;
        }
    }
    cout << "MDC = " << mdc << endl;
    cout << "MMC = " << mmc << endl;
    
}

int main()
{
    int value1, value2;
    cin >> value1 >> value2;
    if (value1 <=0 || value2 <=0){
        return 0;
    }
    if(value1 > value2){
        int aux = 0;
        aux = value1;
        value1 = value2;
        value2 = aux;
    }
    operador(value1, value2);
    return 0;
}