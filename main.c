#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração de variáveis
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float mediaAnual;

    // Entrada
    printf("Digite nota 1: ");
    scanf("%f", &nota1);
    printf("Digite nota 2: ");
    scanf("%f", &nota2);
    printf("Digite nota 3: ");
    scanf("%f", &nota3);
    printf("Digite nota 4: ");
    scanf("%f", &nota4);
    // Processamento
    mediaAnual = (nota1 + nota2 + nota3 + nota4) / 4;

    // Criticar para saber se o aluno esta aprovado ou retido
    // Saída
    if (mediaAnual >= 7)
    {
        printf("APROVADO!!");
    }
    else
    {
        printf("REPROVADO!!");
    }
    return 0;
}

