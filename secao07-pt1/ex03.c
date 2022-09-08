/*Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes
deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada.
Imprimir todos os conjuntos.*/

#include <stdio.h>

int main()
{

    float valores[10], quadrado[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Informe um valor real:\n");
        scanf("%f", &valores[i]);
        quadrado[i] = valores[i] * valores[i];
        printf("%.1f e o seu quadrado é: %.1f\n", valores[i], quadrado[i]);
    }

    return 0;
}
