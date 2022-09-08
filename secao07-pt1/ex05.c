// 5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

#include <stdio.h>

int main(){
    int numeros[10], par=0, contador=0;

    for(int i=0; i<10; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d:\n", &numeros[i]);
        printf("%d\n", numeros[i]);
    }

    for(int i=0; i<10; i++) {
        if(numeros[i]%2==0){
            contador++;
        }
    }

    printf("O total de números pares é: %d\n",contador);

    return 0;
}
