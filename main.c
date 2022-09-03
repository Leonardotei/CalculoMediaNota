#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int continuar=1;

    do
    {
        printf("\t Menu de selecao\n\n\tEscolha uma opcao:\n\n");
        printf("1. Calculo de media do aluno\n");
        printf("2. Como funciona?\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
            case 1:
                calculoMedia();
                break;

            case 2:
                ajuda();
                break;

            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida.\n");
        }
    }while(continuar);
}
void calculoMedia()
{
    // Declaracao de variaveis
    float nota1, nota2, nota3, nota4, exame, mediaAnual, mediaFinal;

    // Entrada
    printf("\tCalculo de media do aluno\n");
    // Nota 1
    printf("\nDigite a nota 1: ");
    scanf("%f", &nota1);
    if (nota1 >10 || nota1 <0)
    {
        printf("\nNota invalida");
        sleep(2);
        system("cls || clear");
        return calculoMedia();
    }
    // Nota 2
    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);
    if (nota2 >10 || nota2 <0)
    {
        printf("\nNota invalida");
        sleep(2);
        system("cls || clear");
        return calculoMedia();
    }
    // Nota 3
    printf("\nDigite a nota 3: ");
    scanf("%f", &nota3);
    if (nota3 >10 || nota3 <0)
    {
        printf("\nNota invalida");
        sleep(2);
        system("cls || clear");        return calculoMedia();
    }
    // Nota 4
    printf("\nDigite a nota 4: ");
    scanf("%f", &nota4);
    if (nota4 >10 || nota4 <0)
    {
        printf("\nNota invalida");
        sleep(2);
        system("cls || clear");
        return calculoMedia();
    }
    // Processamento
    mediaAnual = (nota1 + nota2 + nota3 + nota4) / 4;

    // Saida
    if (mediaAnual >= 7)
    {
        printf("\nAPROVADO!!\n\n");
        sleep(3);
        system("cls || clear");    }
    else
    {
        printf("\nReprovado, aluno devera realizar exame. Insira nota do exame: ");
        scanf("%f", &exame);
        if (exame>10 || exame<0)
        {
            printf("\nNOTA INVALIDA!");
            sleep(2);
            system("cls || clear");
            return calculoMedia();
        }

        mediaFinal = (mediaAnual + exame) / 2;

        if(mediaFinal>=5)
        {
            printf("\nAPROVADO!!\n\n");
            sleep(3);
            system("cls || clear");
        }
        else
        {
            printf("\nREPROVADO!!\n\n");
            sleep(3);
            system("cls || clear");
        }
    }
    return 0;
}
void ajuda()
{
    float voltar;
    printf("\nPrimeiro voce deve inserir as 4 notas que tirou no semestre."
           "\nSe a media for maior que 7, o aluno e aprovado.\n\n"
           "\nCaso reprovado, devera informar a nota do exame."
           "\nAo inserir a nota do exame, sera calculada a media."
           "\nSe a media for maior que 5, o aluno e aprovado, caso contrario, sera retido.\n\n"
           "\n\nDigite 0 para retornar ao menu: ");
           scanf("%f", &voltar);
           if (voltar != 0)
           {
               printf("\t\nDigito invalido");
               sleep(1);
               system("cls || clear");
               return ajuda();
           }
               system("cls || clear");
}
void sair()
{
    printf("\nObrigado por ultilizar nosso programa, esperamos que tenha ajudado\n\n\tVolte sempre! :)\n");
    sleep (3);
}
