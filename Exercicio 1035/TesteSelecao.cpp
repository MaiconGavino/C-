/*Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, e a soma de C com D for maior 
que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão 
escrever "Valores nao aceitos".
Entrada = Quatro números inteiros A, B, C e D.
Saída = Mostre a respectiva mensagem após a validação dos valores
*/

# include <iostream>
using namespace std;
int main(){
    int primValor, segValor, tercValor, quartValor;
    cin >> primValor >> segValor >> tercValor >> quartValor;
    if((segValor > tercValor) && (quartValor > primValor) && (tercValor+quartValor > primValor+segValor) && (tercValor>0) && (quartValor>0)&&(primValor % 2 ==0)){
        cout << "Valores aceitos"<<endl;
    }
    else
    {
        cout <<  "Valores nao aceitos" << endl;
    }
    return 0;
}