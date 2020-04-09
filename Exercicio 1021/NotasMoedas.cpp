

/*Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor 
número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2.
 As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.
Entrada = O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).
Saída = Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
*/

# include <iostream>
# include <cmath>
using namespace std;
int main()
{
    double entrada;
    cin >> entrada;
    int parteNotas = (int) entrada;
    int parteMoedas = (int) round((entrada - parteNotas)*100);
    
    cout << "NOTAS:" <<endl;
    cout << parteNotas / 100 << " nota(s) de R$ 100.00" <<endl;
    parteNotas = parteNotas % 100;
    cout << parteNotas / 50 << " nota(s) de R$ 50.00" <<endl;
    parteNotas = parteNotas % 50;
    cout << parteNotas / 20 << " nota(s) de R$ 20.00" <<endl;
    parteNotas = parteNotas % 20;
    cout << parteNotas / 10 << " nota(s) de R$ 10.00" <<endl;
    parteNotas = parteNotas % 10;
    cout << parteNotas / 5 << " nota(s) de R$ 5.00" <<endl;
    parteNotas = parteNotas % 5;
    cout << parteNotas / 2 << " nota(s) de R$ 2.00" <<endl;
    parteNotas = parteNotas % 2;
    
    cout << "MOEDAS:" << endl;
    cout << parteNotas << " moeda(s) de R$ 1.00" <<endl;
    cout << parteMoedas/50 << " moeda(s) de R$ 0.50" <<endl;
    parteMoedas = parteMoedas % 50;
    cout << parteMoedas/25 << " moeda(s) de R$ 0.25" <<endl;
    parteMoedas = parteMoedas % 25;
    cout << parteMoedas/10 << " moeda(s) de R$ 0.10" <<endl;
    parteMoedas = parteMoedas % 10;
    cout << parteMoedas/5 << " moeda(s) de R$ 0.05" <<endl;
    parteMoedas = parteMoedas % 5;
    cout << parteMoedas<< " moeda(s) de R$ 0.01" <<endl;
    return 0;
}