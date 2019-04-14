#include <stdio.h>
#include <stdlib.h>
#include <math>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,n,res;
	
	printf("\n Calculo de X vezes N elevado a segunda potencia");
	printf("\n Digite o valor de X ");
	scanf("%f",&x); 
	printf("\n Digite o valor de N ");
	scanf("%f",&n);
	res=pow(x*n,2);
	printf("O resultado do calculo e: %f", res);
	
	return 0;
}
