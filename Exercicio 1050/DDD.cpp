/*Leia um número inteiro que representa um código de DDD para discagem interurbana. Em seguida, informe à qual cidade o DDD 
pertence, considerando a tabela abaixo:

Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar:
DDD nao cadastrado.

Entrada = A entrada consiste de um único valor inteiro.

Saída = Imprima o nome da cidade correspondente ao DDD existente na entrada. Imprima DDD nao cadastrado caso não existir DDD 
correspondente ao número digitado.
*/

# include <iostream>
# include <string.h>
using namespace std;
int main()
{
    int entrada;
    cin >> entrada;
    switch(entrada)
    {
        case 61:
            cout << "Brasilia" <<endl;
            break;
        case 71:
            cout << "Salvador" << endl;
            break;
        case 11:
            cout << "Sao Paulo" << endl;
            break;
        case 21:
            cout << "Rio de Janeiro" << endl;
            break;
        case 32:
            cout << "Juiz de Fora" << endl;
            break;
        case 19:
            cout << "Campinas" << endl;
            break;
        case 27:
            cout << "Vitoria" << endl;
            break;
        case 31:
            cout << "Belo Horizonte" << endl;
            break;
        default:
            cout << "DDD nao cadastrado" << endl;
            break;
    }
    return 0;
}