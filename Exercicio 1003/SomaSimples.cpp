/*Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir 
escrever o valor desta variável.

Entrada = O arquivo de entrada contém 2 valores inteiros.

Saída = Imprima a variável SOMA com todas as letras maiúsculas, com um espaço em branco antes e depois da igualdade seguido pelo valor 
correspondente à soma de A e B. Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, 
você receberá "Presentation Error".
*/

#include <iostream>
 
using namespace std;
 
int main() {
    int primeiraEntrada, segundaEntrada, resultado;
    cin >> primeiraEntrada;
    cin >> segundaEntrada;
    resultado = primeiraEntrada + segundaEntrada;
    cout << "SOMA = " << resultado << endl;
    return 0;
}