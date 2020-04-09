/* Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). 
A seguir, mostre a quantidade de valores positivos digitados.

Entrada = Seis valores, negativos e/ou positivos.
Saída = Imprima uma mensagem dizendo quantos valores positivos foram lidos.*/

# include <iostream>
using namespace std;
int main()
{
    float primeiro, segundo, terceiro, quarto, quinto, sexto, numPositivo;
    cin >> primeiro;
    if(primeiro > 0)
    {
        primeiro = 1;
    }
    else
    {
        primeiro = 0;
    }
    cin >> segundo;
    if( segundo > 0)
    {
        segundo =1;
    }
    else
    {
        segundo = 0;
    }
    cin >> terceiro;
    if(terceiro > 0)
    {
        terceiro = 1;
    }
    else
    {
        terceiro = 0;
    }
    cin >> quarto;
    if(quarto > 0)
    {
        quarto >0;
    }
    else
    {
        quarto = 0;
    }
    cin >> quinto;
    if(quinto > 0)
    {
        quinto = 1;
    }
    else
    {
        quinto = 0;
    }
    cin >> sexto;
    if(sexto > 0)
    {
        sexto = 1;
    }
    else
    {
        sexto = 0;
    }
    numPositivo = primeiro + segundo + terceiro + quarto + quinto + sexto;
    cout << numPositivo <<" valores positivos" << endl;
        
    return 0;
}