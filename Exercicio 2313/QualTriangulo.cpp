

/*Dados três valores, verifique se os três podem formar um triângulo. Em caso afirmativo, verifique se ele é escaleno, isóceles ou 
equilátero e se trata-se de um triângulo retângulo ou não.

Entrada = A entrada consiste em três números inteiros A,B e C (0 < A,B,C < 105).

Saída = A saída deve conter a string "Invalido" se os valores lidos não formarem um triângulo. Se os valores formarem um triângulo a saída 
deve ser "Valido-Equilatero", "Valido-Escaleno" ou "Valido-Isoceles" de acordo com a característica do triângulo seguido de 
"Retangulo: S" se o triângulo for retângulo ou "Retangulo: N" se não for, conforme os exemplos.*/

# include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int entA, entB, entC;
    cin >> entA >> entB >> entC;
    if(entA+entB<=entC || entA+entC<=entB || entB+entC<=entA)
    {
        cout << "Invalido" << endl;
    }
    else
    {
        if(entA == entB && entB == entC)
        {
            cout << "Valido-Equilatero" << endl;
            cout <<  "Retangulo: N" <<endl;
        }
        else{
            if(entA!= entB && entB != entC && entA != entC)
            {
                cout << "Valido-Escaleno" << endl;
            }
            else
            {
                cout << "Valido-Isoceles" << endl;
            }
            if(pow(entA,2) == pow(entB,2) + pow(entC,2) || pow(entB,2) == pow(entA,2) + pow(entC,2) || pow(entC,2) == pow(entB,2) + pow(entA,2))
            {
                cout <<  "Retangulo: S" << endl;
            }
            else
            {
                cout <<  "Retangulo: N" <<endl;
            }
        }
    }
    return 0;
}