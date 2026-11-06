#include <stdio.h>

int main() {
    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Adivinhação *\n");
    printf("************************************\n");

    int numerosecreto;
    numerosecreto = 42;

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Você chutou o número %d\n", chute);

    int acertou = chute == numerosecreto;

    // imprimirá 0 quando a condição for falsa,
    // e 1 quando ela for verdadeira.
    printf("Acertou: %d\n", acertou);

    if(acertou) {
    printf("Parabéns! Você acertou!\n");

    } else {
        int maior = chute > numerosecreto
        if(chute > numerosecreto) {
        printf("Seu chute foi maior do que o número secreto!\n");
        } 
        if(chute < numerosecreto) {
        printf("Seu chute foi menor do que o número secreto!\n");
        }

    }
}