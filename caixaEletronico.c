#include <stdio.h>

int main() {
    printf("\n***************************************\n");
    printf("Caixa - É por mais vidas transformadas.\n");
    printf("***************************************\n\n");

    int accountNumber;
    int agencyNumber;
    char name[50];
    int balance = 1000;

    printf("Qual o número da conta? Ex:(123456) ");
    scanf("%d", &accountNumber);
    printf("Número da conta: %d\n", accountNumber);
    printf("Qual o número da agência? Ex:(1234)\n");
    scanf("%d", &agencyNumber);
    printf("\nNúmero da conta: %d\nNúmero da agência: %d\n\n", accountNumber, agencyNumber);
    printf("E como devemos te chamar? ");
    scanf("%s", name);

    // Limpa a tela
    printf("\033[H\033[J");

    printf("\nBem-vindo %s. Agora você pode realizar suas operações financeiras escolhendo as opções de nosso menu!\n\n", name);
    printf("Agência: %d\n", agencyNumber);
    printf("Conta: %d\n", accountNumber);
    printf("Saldo: R$%d\n\n", balance);

    printf("Menu de opções:\n");
    printf("\n1. Sacar\n");
    printf("2. Depositar\n");
    printf("3. Transferir\n");
    printf("4. Extrato\n");
    printf("5. Sair\n\n");

    int option;
    printf("Escolha uma opção: ");
    scanf("%d", &option);
    printf("\033[H\033[J");
    printf("\n***************************************\n");
    printf("Caixa - É por mais vidas transformadas.\n");
    printf("***************************************\n\n");

    switch(option) {
        case 1:
            printf("Quanto você deseja sacar?\n");
            printf("\n1 - R$50\n");
            printf("2 - R$100\n");
            printf("3 - R$150\n");
            printf("4 - R$200\n");
            printf("5 - R$250\n");
            printf("6 - Outro valor\n");

            int withdrawOption;
            printf("\nEscolha uma opção: ");
            scanf("%d", &withdrawOption);

            int withdrawValue = 0;

            switch(withdrawOption) {
                case 1: withdrawValue = 50; break;
                case 2: withdrawValue = 100; break;
                case 3: withdrawValue = 150; break;
                case 4: withdrawValue = 200; break;
                case 5: withdrawValue = 250; break;
                case 6:
                    printf("\nDigite o valor que deseja sacar: ");
                    scanf("%d", &withdrawValue);
                    break;
                default:
                    printf("Opção de saque inválida.\n");
                    break;
            }

            if(withdrawValue > 0) {
                if(withdrawValue <= balance) {
                    printf("\nSacando R$%d...\n", withdrawValue);
                    balance = balance - withdrawValue;
                    printf("Saque realizado com sucesso. Seu saldo atual é: R$%d\n", balance);
                } else {
                    printf("Saldo insuficiente. Tente outro valor, seu saldo atual é: R$%d\n", balance);
                }
            } else if(withdrawOption >= 1 && withdrawOption <= 6) {
                printf("Valor de saque inválido.\n");
            }
        break;
    }

}
