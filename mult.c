#include <stdio.h>
int main(){
    //Definicões de variáveis
	int a, b, c, d, e;
	
	printf("Digite tres números inteiros:\n");
	//Entrada
	scanf("%d %d %d", &a, &b, &d);
	
	
	//Processamento
	c = a + b;
	e = c * d;
	printf("A soma de a + b = %d", c);	
	printf("A multiplicação de c x d = %d", e);
	return 0;
		
}      

