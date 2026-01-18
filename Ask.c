#include <stdio.h>

int main(void){
    char nome[20];
    printf("Qual é o seu nome? ");
    scanf("%19s", nome);
    printf("Olá, %s", nome);
}
