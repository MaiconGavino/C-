/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo 
a fórmula: DIFERENCA = (A * B - C * D).

Entrada = O arquivo de entrada contém 4 valores inteiros.

Saída = Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco antes e depois da 
igualdade.
*/

#include <iostream>
 
using namespace std;
 
int main() {
      int primeiraEntrada, segundaEntrada, terceiraEntrada, quartaEntrada, diferenca; 
      cin >> primeiraEntrada;
      cin >> segundaEntrada;
      cin >> terceiraEntrada;
      cin >> quartaEntrada;
      diferenca = (primeiraEntrada * segundaEntrada) - (terceiraEntrada * quartaEntrada) ;
      cout << "DIFERENCA = " << diferenca << endl;
      return 0;
}