#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara��o de vari�veis
    float nota1;
    float nota2;
    float mediaAnual;

    // Entrada
    printf("Digite nota 1: ");
    scanf("%f", &nota1);
    printf("Digite nota 2: ");
    scanf("%f", &nota2);

    // Processamento
    mediaAnual = (nota1 + nota2) / 2;

    // Criticar para saber se o aluno esta aprovado ou retido
    // Sa�da
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

