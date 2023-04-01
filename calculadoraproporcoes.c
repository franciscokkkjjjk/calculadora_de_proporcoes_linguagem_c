# include <stdio.h>

int main(void)
{
    char continuar[1];
    int continuacaoDoRepetidor = 1;
    const int numeroPadraoDePorcoes = 6;
    float porcoes, file, sal, oleo, molho, azeitonas, leite, proporcoes;
    printf("Calculadora de proporcoess para receita de file\n\n");
    while (1)
    {
        printf("Quantas porcoes deseja servir? ");
        scanf("%e", &porcoes);

        proporcoes = porcoes / numeroPadraoDePorcoes;

        file = proporcoes / 2;
        sal = proporcoes;
        oleo = proporcoes * 2;
        molho = proporcoes;
        azeitonas = proporcoes * 10;
        leite = proporcoes / 2;

        printf("\n%.2fKg de file de pescada \nSal: %.2f \n%.2f colheres (sopa) de oleo \n%.2f lata de molho de tomate \n%.2f azeitonas pretas\n%.2f xicara (cha) de leite de coco\n\n", file, sal, oleo, molho, azeitonas, leite);
        printf("Deseja continuar? (S/N) ");
        scanf("%s", continuar);
        if (continuar[0] == 83)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}