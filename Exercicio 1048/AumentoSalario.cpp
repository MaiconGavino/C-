/*A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:

Salário 	Percentual de Reajuste

0 - 400.00    15%
400.01 - 800.00   12%
800.01 - 1200.00   10%
1200.01 - 2000.00   7%
Acima de 2000.00     4%
	
Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.
Entrada = A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.
Saída = Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste e o percentual de reajuste ganho, conforme exemplo abaixo.
*/

# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
    float salario, reajuste, newsalario;
    cin >> salario;
    cout << fixed << setprecision(2);
    if( salario <= 400.00)
    {
        reajuste = (salario*15)/100;
        newsalario = salario + reajuste;
        cout << "Novo salario: " << newsalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if (salario > 400 && salario <= 800)
    {
        reajuste = (salario*12)/100;
        newsalario = salario + reajuste;
        cout << "Novo salario: " << newsalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if (salario > 800 && salario <= 1200)
    {
        reajuste = (salario*10)/100;
        newsalario = salario + reajuste;
        cout << "Novo salario: " << newsalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (salario > 1200 && salario <= 2000)
    {
        reajuste = (salario*7)/100;
        newsalario = salario + reajuste;
        cout << "Novo salario: " << newsalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else if (salario > 2000)
    {
        reajuste = (salario*4)/100;
        newsalario = salario + reajuste;
        cout << "Novo salario: " << newsalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    return 0;
}