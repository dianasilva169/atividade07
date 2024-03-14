
//Questão 01
#include <stdio.h>

int main() {
    char c = 'a';
    char *pc = &c;
    printf("endereco de c: %p/valor de c: %c\n", (void *) &c, c);
    printf("valor de pc: %p\nValor apontado por pc: %c\n",(void*)pc,*pc);
    printf("endereco de pc: %p\n, (void *&pc",pc);
    return 0;
    }
    //Questão 02
  #include <stdio.h>
int main() {
  
   int inteiro = 10;
   float real = 3.14;
   char caractere = 'A';
  
   int *ptr_inteiro = &inteiro;
   float *ptr_real = &real;
   char *ptr_caractere = &caractere;
   
   printf("Valor do inteiro: %d\n", inteiro);
   printf("Valor do real: %.2f\n", real);
   printf("Valor do caractere: %c\n", caractere);

   *ptr_inteiro = 20;
   *ptr_real = 6.28;
   *ptr_caractere = 'B';
  
   printf("Novo valor do inteiro: %d\n", inteiro);
   printf("Novo valor do real: %.2f\n", real);
   printf("Novo valor do caractere: %c\n", caractere);
   return 0;
}
//Questão 03
#include <stdio.h>
int main() {
   int var1, var2;
   
   printf("Digite o valor da primeira variável inteira: ");
   scanf("%d", &var1);
   printf("Digite o valor da segunda variável inteira: ");
   scanf("%d", &var2);
   
   printf("Endereço de memória da primeira variável: %p\n", (void *)&var1);
   printf("Endereço de memória da segunda variável: %p\n", (void *)&var2);
   return 0;
}

//Questão 04
#include <stdio.h>

void trocarValores(int *ptrA, int *ptrB) {
   int temp = *ptrA;
   *ptrA = *ptrB;
   *ptrB = temp;
}
int main() {
   int a, b;
  
   printf("Digite o valor de A: ");
   scanf("%d", &a);
   printf("Digite o valor de B: ");
   scanf("%d", &b);
   
   printf("Valores antes da troca:\n");
   printf("A = %d, B = %d\n", a, b);
  
   trocarValores(&a, &b);
  
   printf("Valores depois da troca:\n");
   printf("A = %d, B = %d\n", a, b);
   return 0;
}
//Questão 05
#include <stdio.h>

int somaDobro(int *ptrA, int *ptrB) {
   *ptrA *= 2; 
   *ptrB *= 2; 
   return (*ptrA + *ptrB); 
}
int main() {
   int a, b;

   printf("Digite o valor de A: ");
   scanf("%d", &a);
   printf("Digite o valor de B: ");
   scanf("%d", &b);
   
   int resultado = somaDobro(&a, &b);
   
   printf("A soma do dobro de A e B é: %d\n", resultado);
   
   printf("Novo valor de A: %d\n", a);
   printf("Novo valor de B: %d\n", b);
   return 0;
}