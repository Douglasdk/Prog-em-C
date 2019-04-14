#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float base,alt,area;
	
	printf("\n Cauculo da area do retangulo");
	printf("\n Digite o valor da altura ");
	scanf("%f",&base);
	printf("\n Digite o valor da altura ");
	scanf("%f",&alt);
	area=base*alt;
	printf("O valor da area e: %f",area);
	
	return 0;
}
