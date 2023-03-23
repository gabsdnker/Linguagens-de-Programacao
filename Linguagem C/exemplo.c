#include <stdio.h>

int main() {
   int numero1, numero2, soma;
   
   printf("Digite o primeiro número: ");
   scanf("%d", &numero1);
   
   printf("Digite o segundo número: ");
   scanf("%d", &numero2);
   
   soma = numero1 + numero2;
   
   printf("A soma dos números é %d\n", soma);
   
   return 0;
}

//Este código pede para o usuário digitar dois números, e em seguida faz a soma desses números e imprime o resultado na tela.
//Agora, vamos ver como executar esse código passo a passo:

//1-Inclua a biblioteca stdio.h no início do arquivo, para poder utilizar as funções printf e scanf:
//#include <stdio.h>

//2-Comece a função principal main:
//int main() {

//3-Declare três variáveis do tipo int:
//int numero1, numero2, soma;

//4-Use a função printf para imprimir na tela a mensagem "Digite o primeiro número: ":
//printf("Digite o primeiro número: ");

//5-Use a função scanf para ler o primeiro número digitado pelo usuário e armazená-lo na variável numero1:
//scanf("%d", &numero1);

//6-Repita os passos 4 e 5 para o segundo número:
//printf("Digite o segundo número: ");
//scanf("%d", &numero2);

//7-Some os valores das variáveis numero1 e numero2 e armazene o resultado na variável soma:
//soma = numero1 + numero2;

//8-Use a função printf para imprimir na tela a mensagem "A soma dos números é " seguida do valor da variável soma:
//printf("A soma dos números é %d\n", soma);

//9-Encerre a função principal main com return 0;:
//return 0;

