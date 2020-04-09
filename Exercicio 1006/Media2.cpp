/*Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a 
nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa 
decimal.

Entrada = O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double).

Saída = Imprima a variável MEDIA conforme exemplo abaixo, com 1 dígito após o ponto decimal e com um espaço em branco antes e depois da 
igualdade. Assim como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá 
"Presentation Error".
*/

#include <iostream>
 
using namespace std;
 
int main() {
      double primeiraEntrada, segundaEntrada, terceiraEntrada, media; 
      cin >> primeiraEntrada;
      cin >> segundaEntrada;
      cin >> terceiraEntrada;
      media = (primeiraEntrada * 2 + segundaEntrada * 3 + terceiraEntrada * 5)/(10);
      cout << fixed;
      cout.precision(1);
      cout << "MEDIA = " << media << endl;
      return 0;
}