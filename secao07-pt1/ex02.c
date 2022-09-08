//2. Crie uma programa que leia 6 valores int, e mostre na tela os valores lidos

# include <stdio.h>

int main(){
   int i, num[6];

   printf("Digite 6 numeros inteiros.\n");
   for(i=0; i<6; i++) {
        printf("Digite o %d valor: ", (i+1));
    scanf("%d", &num[i]);
   }
   for(i=0; i<6; i++) {
        printf("A posição [%d] = %d\n",i,num[i]);
   }

    return 0;
}
