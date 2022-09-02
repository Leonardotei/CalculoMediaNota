#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int continuar=1;

    do
    {
        printf("\tMenu de selecao\n\n\tEscolha uma opcao:\n\n");
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
    printf("\nDigite nota 1: ");
    scanf("%f", &nota1);
    if (nota1 >10 || nota1 <0)
    {
        printf("\nNota invalida");
        abort();
    }
    // Nota 2
    printf("\nDigite nota 2: ");
    scanf("%f", &nota2);
    if (nota2 >10 || nota2 <0)
    {
        printf("\nNota invalida");
        abort();
    }
    // Nota 3
    printf("\nDigite nota 3: ");
    scanf("%f", &nota3);
    if (nota3 >10 || nota3 <0)
    {
        printf("\nNota invalida");
        abort();
    }
    // Nota 4
    printf("\nDigite nota 4: ");
    scanf("%f", &nota4);
    if (nota4 >10 || nota4 <0)
    {
        printf("\nNota invalida");
        abort();
    }
    // Processamento
    mediaAnual = (nota1 + nota2 + nota3 + nota4) / 4;

    // Criticar para saber se o aluno esta aprovado ou retido
    // Sa�da
    if (mediaAnual >= 7)
    {
        printf("\nAPROVADO!!\n\n");
    }
    else
    {
        printf("\nReprovado, aluno devera realizar exame. Insira nota do exame: ");
        scanf("%f", &exame);
        if (exame>10 || exame<0)
        {
            printf("\nNOTA INVALIDA!");
            abort();
        }

        mediaFinal = (mediaAnual + exame) / 2;

        if(mediaFinal>=5)
        {
            printf("\nAPROVADO!!\n\n");
        }
        else
        {
            printf("\nREPROVADO!!\n\n");
        }
    }
    return 0;
}
void ajuda()
{
    float voltar;
    printf("\nPrimeiro voce deve inserir as 4 notas que tirou no semestre."
           "\nO programa pega estas 4 notas e divide por 4."
           "\nEntao sera calculado a sua media, e se for maior ou igual a 7, o aluno e aprovado."
           "\nCaso reprovado, devera informar a nota do exame."
           "\nAo inserir a nota do exame, sera feito um novo calculo: a sua media + exame / 2."
           "\nApos informar a nota do exame, sera informado se o aluno foi aprovado ou retido.\n\n"
           "\n\nDigite 0 para retornar: ");
           scanf("%f", &voltar);
           if (voltar != 0)
           {
               printf("Digito invalido");
           }
           system("cls || clear");
}
void sair()
{
    printf("\nObrigado por ultilizar nosso programa, esperamos que tenha ajudado\n\n\tVolte sempre! :)\n");
    sleep (5);
}
