/*Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

Entrada = O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída = O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem 
correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto 
decimal.
*/

# include <iostream>
# include <math.h>
# include <iomanip>
using namespace std;
int main(){
    double primeiraEntrada, segundaEntrada, terceiraEntrada, pi, triangulo, circulo,trapezio, quadrado, retangulo;
    pi = 3.14159;
    cin >> primeiraEntrada >> segundaEntrada >> terceiraEntrada;
    triangulo = (primeiraEntrada * terceiraEntrada)/2;
    circulo = pi * pow(terceiraEntrada, 2);
    trapezio = ((primeiraEntrada + segundaEntrada)*terceiraEntrada)/2;
    quadrado = pow(segundaEntrada, 2);
    retangulo = primeiraEntrada * segundaEntrada;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << setprecision(3) << triangulo << endl;
    cout << "CIRCULO: " << setprecision(3) << circulo << endl;
    cout << "TRAPEZIO: " << setprecision(3) << trapezio << endl;
    cout << "QUADRADO: " << setprecision(3) << quadrado << endl;
    cout << "RETANGULO: " << setprecision(3) << retangulo << endl;
    return 0;
}