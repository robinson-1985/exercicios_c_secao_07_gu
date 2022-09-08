#include <stdio.h>

int main(){
    int numeros[10], i, menor, maior;

    for(int i=0; i<10; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d:\n", &numeros[i]);
        printf("A posição [%d] = %d\n", i, numeros[i]);
        if(maior < numeros[i]){
            maior = numeros[i];
        }
    }

    printf("O maior elemento do vetor é: %d\n", maior);
    printf("A posição [%d] = %d é a maior\n", i, maior); // corrigir

    return 0;
}
