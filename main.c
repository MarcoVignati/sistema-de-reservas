#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    char nome[61];
    char cpf[15];
    int dia;
    int pessoas;
} Reserva;

Reserva reservas[30];
int totalReservas = 0;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    do
    {
        printf("1 - Fazer Reserva\n");
        printf("2 - Listar Reservas\n");
        printf("3 - Total de Pessoas por Dia\n");
        printf("4 - Sair\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);
        fflush(stdin);

        if (opcao == 1)
        {
            if (totalReservas < 30)
            {
                printf("\nDigite o nome do responsável: ");
                fgets(reservas[totalReservas].nome, 61, stdin);
                reservas[totalReservas].nome[strcspn(reservas[totalReservas].nome, "\n")] = '\0';

                printf("Digite o CPF: ");
                fgets(reservas[totalReservas].cpf, 15, stdin);
                reservas[totalReservas].cpf[strcspn(reservas[totalReservas].cpf, "\n")] = '\0';

                printf("Digite o dia: \n1 - Quinta \n2 - Sexta \n3 - Sábado \n4 - Domingo \n");
                scanf("%d", &reservas[totalReservas].dia);
                fflush(stdin);

                printf("Digite a quantidade de pessoas: ");
                scanf("%d", &reservas[totalReservas].pessoas);
                fflush(stdin);

                totalReservas++;
                printf("Reserva cadastrada com sucesso!\n");
            }
            else
            {
                printf("\nNão é possível fazer mais reservas. Limite atingido.\n");
            }
            printf("\n");
            system("pause");
        }
        else if (opcao == 2)
        {
            if (totalReservas == 0)
            {
                printf("\nNenhuma reserva cadastrada.\n");
            }
            else
            {
                for (int i = 0; i < totalReservas; i++)
                {
                    printf("Nome: %s\n", reservas[i].nome);
                    printf("CPF: %s\n", reservas[i].cpf);
                    printf("Dia: %d\n", reservas[i].dia);
                    printf("Número de Pessoas: %d\n", reservas[i].pessoas);
                    printf("===============================\n");
                }
            }
            printf("\n");
            system("pause");
        }
        else if (opcao == 3)
        {
            int dia, total = 0;
            printf("Digite o dia: \n1 - Quinta \n2 - Sexta \n3 - Sábado \n4 - Domingo: \n");
            scanf("%d", &dia);
            fflush(stdin);

            for (int i = 0; i < totalReservas; i++)
            {
                if (reservas[i].dia == dia)
                {
                    total += reservas[i].pessoas;
                }
            }

            printf("Total de pessoas no dia %d: %d\n", dia, total);
            printf("\n");
            system("pause");
        }
        else if (opcao == 4)
        {
            printf("Saindo do programa...\n");
        }
        else
        {
            printf("Opção inválida! Tente novamente.\n");
            printf("\n");
            system("pause");
        }
        system("cls");
    } while (opcao != 4);

    return 0;
}
