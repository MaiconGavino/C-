/*Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas 
consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.
Entrada = O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).
Saída = Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não 
esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/

# include <iostream>
using namespace std;
int main(){
    int quantNotas, Notas;
    int arr[7]={100, 50, 20, 10, 5, 2, 1};
    cin >> Notas;
    while(Notas){
        cout << Notas << endl;
        for(int i=0; i<=6; i++)
        {
            quantNotas = Notas/arr[i];
            Notas %= arr[i];
            cout << quantNotas << " nota(s) de R$ " << arr[i] << ",00" << endl;
        }
    }
    return 0;
}