#include <stdio.h>

int main() {
    printf("***************************************\n");
    printf("Caixa - É por mais vidas transformadas.\n");
    printf("***************************************\n");

    int accountNumber;
    int agencyNumber;
    char name[50];
    int balance = 1000;

    printf("Qual o número da conta? Ex:(123456) ");
    scanf("%d", &accountNumber);
    printf("Número da conta: %d\n", accountNumber);
    printf("Qual o número da agência? Ex:(1234)\n");
    scanf("%d", &agencyNumber);
    printf("Numero da conta: %d\nNúmero da agência: %d\n", accountNumber, agencyNumber);
    printf("E como devemos te chamar?");
    scanf("%s", name);

    // Limpa a tela
    printf("\033[H\033[J");

    printf("Bem-vindo %s! Agora você pode realizar suas operações financeiras escolhendo as opções de nosso menu!\n", name);
    printf("Agência: %d\n", agencyNumber);
    printf("Conta: %d\n", accountNumber);
    printf("Saldo: R$%d\n", balance);

}
