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
    // Nota 1
    printf("Digite nota 1: ");
    scanf("%f", &nota1);
    if (nota1 >10 || nota1 <0)
    {
        printf("Nota invalida");
        abort();
    }
    // Nota 2
    printf("Digite nota 2: ");
    scanf("%f", &nota2);
    if (nota2 >10 || nota2 <0)
    {
        printf("Nota invalida");
        abort();
    }
    // Nota 3
    printf("Digite nota 3: ");
    scanf("%f", &nota3);
    if (nota3 >10 || nota3 <0)
    {
        printf("Nota invalida");
        abort();
    }
    // Nota 4
    printf("Digite nota 4: ");
    scanf("%f", &nota4);
    if (nota4 >10 || nota4 <0)
    {
        printf("Nota invalida");
        abort();
    }
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

