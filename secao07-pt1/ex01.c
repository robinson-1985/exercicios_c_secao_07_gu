/*Faça um programa que possua um vetor denominado A
que armazene 6 números inteiros. O programa deve executar
os seguintes passos:

(a)Atribua os seguintes valores a este vetor: 1,0,5,-2,-5,-7.
(b)Armazene em uma variável inteira (simples) a soma entre os
valores das posições A[0],A[1] e A[5] do vetor e mostre na
tela esta soma.
(c)Modifique o vetor na posição 4, atribuindo a esta posição
o valor 100.
(d)Mostre na tela cada valor do vetor A, um em cada linha.*/

#include <stdio.h>

int main()
{
    int a[6]; 
    int soma=0, contador=0;

    a[0] = 1;
    a[1] = 0;
    a[2] = 5;
    a[3] = -2;
    a[4] = -5;
    a[5] = -7;

    soma=a[0]+a[1]+a[5];
    printf("A soma é: %d\n", soma);

    a[4]=100;

    for(int i=0;i<6;i++){
        printf("A posição [%d] = %d\n",i,a[i]);
    }

    return 0;
}
