#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao de variaveis
    int aluno;
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
        printf("\nAPROVADO!!");
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
            printf("\nAPROVADO!!");
        }
        else
        {
            printf("\nREPROVADO!!");
        }
    }
    return 0;
}

