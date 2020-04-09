
/*Um novo jogo chamado Ímpar, Par ou Roubo (IPR) está se tornando muito popular. 
Esse jogo surgiu quando alguns amigos estavam sem conexão com a internet, sem celular,
sem computador e bastante desocupados. O jogo está tão popular que irá acontecer um
campeonato mundial de IPR e cada país do mundo irá escolher um representante para competir.

O jogo funciona da seguinte forma: dois jogadores participam, o jogador 1 escolhe 
entre par ou ímpar, então cada jogador escolhe um inteiro positivo, se a soma desses 
números for par e o jogador 1 tiver escolhido par então o jogador 1 ganha, se a soma 
for ímpar o jogador 2 ganha. Caso o jogador 1 tivesse escolhido ímpar ele ganharia se 
a soma fosse ímpar, caso a soma fosse par o jogador 2 ganharia. Nada de diferente de 
um jogo de par ou ímpar convencional, correto?

A diferença do jogo é que o jogador 1 pode roubar e assim assegurar sua vitória 
independentemente do resultado do jogo de ímpar ou par convencional, já o jogador 2 
pode ou não acusar o jogador 1 de roubo. Com essas adições no jogo se o jogador 1 
roubar e o jogador 2 acusar o roubo então o jogador 2 ganha, caso o jogador 2 não 
acuse o roubo e o jogador 1 roubar então o jogador 1 ganha, caso o jogador 2 acuse 
o roubo, mas o jogador 1 não tiver roubado então o jogador 1 ganha, se o jogador 1 
não roubar e o jogador 2 não acusar o roubo o jogo segue como descrito anteriormente.

Você foi contratado pela OIIPR (Organização Internacional de Ímpar, Par ou Roubo) 
para desenvolver um programa que dada a escolha do jogador 1 entre par ou ímpar, os 
números escolhidos como jogada e as ações dos jogadores (roubo/acusação) mostre quem 
foi o vencedor.
*/

#include <iostream>
using namespace std;

int main () {
    int jog1,jog2,m;
    bool escolha,roubo,acusar;
    string z;
    cin>>escolha>>jog1>>jog2>>roubo>>acusar;
    m = jog1+jog2;

    if(escolha==1){
        if(((m%2==0) && (roubo==1) && (acusar==0)) || ((m%2==0) && (roubo==0) && (acusar==0)) || ((roubo==0) && (acusar==1)) || ((roubo==1) && (acusar==0))){
            z = "Jogador 1 ganha!";
        }else{
            z = "Jogador 2 ganha!";
        }
    }else{
        if(((m%2!=0) && (roubo==1) && (acusar==0)) || ((m%2!=0) && (roubo==0) && (acusar==0)) || ((roubo==0) && (acusar==1)) || ((roubo==1) && (acusar==0))){
            z = "Jogador 1 ganha!";
        }else{
            z = "Jogador 2 ganha!";
        }
    }
    cout<<z<<endl;
    return 0;
}