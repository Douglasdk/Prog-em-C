#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float base,alt,area;
	
	printf("\n Cauculo da area do triangulo ");
	printf("\n Digite o valor da base ");
	scanf("%f",&base);
	printf("\n Digite o valor da altura ");
	scanf("%f",&alt);
	area=(base*alt)/2;
	printf("\n A area do triangulo e: %f", area);
	
	return 0;
}
