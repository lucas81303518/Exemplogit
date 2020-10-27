#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,a,ex,resultado=1;
printf("Calculando potencias\n");
printf("Entre com o numero a ser calculado:\n");
scanf("%d",&a);

printf("Digite o numero que sera o expoente.\n",ex);
scanf("%d",&ex);

for(i=0; i<ex; i++) // aqui tinha um virgula, nao deixa que o bloco que vem apos nao fizesse parte do loop. i tem que variar expo vezes, do jeito que estava antes esta variando expo+1
{
resultado = resultado*a; // a logica é essa, do jeito que estava antes o resultado iria ficar igual a expo*numero(sempre ia ser esse o resultado).
}

printf("O resultado e: %d \n", resultado);

}
