

/*Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo 
e apresente a mensagem:

Perimetro = XX.X

Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem

Area = XX.X
Entrada = A entrada contém três valores reais.
Saída = O resultado deve ser apresentado com uma casa decimal.
*/

# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
    double entA, entB, entC, area, perimetro;
    cin >> entA >> entB >> entC;
    cout << fixed << setprecision(1);
    if(entA+entB<=entC || entA+entC<=entB || entB+entC<=entA)
    {
        area = ((entA + entB) * entC)/2;
        cout << "Area = " << area << endl;
    }
    else
    {
        perimetro = entA + entB + entC;
        cout << "Perimetro = " <<perimetro << endl;
        
    }
    return 0;
}