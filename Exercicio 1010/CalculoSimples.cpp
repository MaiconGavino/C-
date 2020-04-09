/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, 
o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada = O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 
casas decimais.

Saída = A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois pontos e um espaço 
após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.*/

# include <iostream>
# include <iomanip>
using namespace std;
 
int main() {
    int codPeca1, numPeca1, codPeca2, numPeca2;
    double valorPec1, valorPec2, total;
    cin >> codPeca1 >> numPeca1 >> valorPec1;
    cin >> codPeca2 >> numPeca2 >> valorPec2;
    total = (numPeca1*valorPec1 + numPeca2*valorPec2);
    cout <<  fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << setprecision(2) << total << endl;
    return 0;
}