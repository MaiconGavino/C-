/* Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível segundo o esquema abaixo, 
da esquerda para a direita.  Em seguida conclua qual dos animais seguintes foi escolhido, através das três 
palavras fornecidas. */

#include <iostream>
using namespace std;

int main () {
    string A,B,C,x;
    cin>>A;
    cin>>B;
    cin>>C;

    if(A=="vertebrado") {
        if(B=="ave"){
            if(C=="carnivoro"){
                x = "aguia";
            }
            else if(C=="onivoro"){
                x = "pomba";
            }

        }
        else if(B=="mamifero"){
            if(C=="onivoro"){
                x = "homem";
            }
            else if(C=="herbivoro"){
                x = "vaca";
            }
        }
    }
    else if(A=="invertebrado"){
        if(B=="inseto"){
            if(C=="hematofago"){
                x = "pulga";
            }
            else if(C=="herbivoro"){
                x = "lagarta";
            }
        }
        else if(B=="anelideo"){
            if(C=="hematofago"){
                x = "sanguessuga";
            }
            else if(C=="onivoro"){
                x = "minhoca";
            }

        }

    }
    cout<<x<<endl;
    return 0;
}