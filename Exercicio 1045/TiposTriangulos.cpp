/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. 
A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem 
adequada:

    se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
    se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
    se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
    se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
    se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

Entrada = A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).
Saída = Imprima todas as classificações do triângulo especificado na entrada.
*/

# include <iostream>
using namespace std;
int main()
{
    double entA, entB, entC;
    cin >> entA >> entB >> entC;
    if(entB+entC<=entA || entA+entC<=entB || entB+entA<=entC)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {
        if (entA*entA == entB*entB + entC * entC || entB*entB == entA*entA + entC * entC || entC*entC == entB*entB + entA * entA)
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        else if(entA*entA > entB*entB + entC * entC || entB*entB > entA*entA + entC * entC || entC*entC > entB*entB + entA * entA)
        {
           cout << "TRIANGULO OBTUSANGULO" << endl; 
        }
        else
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
   
        if(entA == entB && entB == entC)
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        else if(entA == entB || entB == entC || entA==entC)
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }         
    }
    return 0;
}