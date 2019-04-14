#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float mes1,mes2,mes3;
	
	printf("\n Cauculo de um valor de RS 500,00 aplicados num periodo de 3 meses");
	printf("\n com renda de juros de 1 por cento ao mes");
	mes1=(500*(1/100))+500;
	mes2=(mes1*(1/100))+mes1;
	mes3=(mes2*(1/100))+mes2;
	printf("O saldo final da poupança apos o periodo e de : %f",mes3); 
	
	return 0;
}
