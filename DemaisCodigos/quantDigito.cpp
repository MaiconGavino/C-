/*
Implemente uma função que receba como parâmetro de entrada um numero inteiro
maior ou igual a 0. A função a ser implementada deve calcular o total de digitos
pares e impares do numero que é o parâmetro de entrada, armazenando os resultados
em dois parâmentros de saida.
Imprementa tambem a função man, que deve ler do usuário varios numeros inteiros 
maiores ou iguais a zero e exibir, para casa um deles, os resultados de uma chamada 
á função passando como parâmetro o numero lido, A leitura dos numeros se encerra com 
o valor -1
*/
#include <iostream>
#include <cstring>
using namespace std;
int funcCont(char *num){
    int i, par=0, impar=0;
       for(i=0; i <=(strlen(num)-1);i++){
        if(num[i]=='1'||num[i]=='3'||num[i]=='5'||num[i]=='7'||num[i]=='9')
            impar+=1;
        if(num[i]=='0'||num[i]=='2'||num[i]=='4'||num[i]=='6'||num[i]=='8')
            par+=1;
    }
    cout << num << " tem " << par << " digito(s) par(es) e " << impar << " digitos impar(es)" << endl;
}
int main()
{
    char num[25];
    while(cin >> num)
    {
        int  saida;
        saida = atoi(num);
        if(saida == -1 )
            return 0;
        funcCont(num); 
    }
    return 0; 
}