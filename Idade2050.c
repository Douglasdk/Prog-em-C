#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nasc,id2050,ano,idade;
	
	
	printf("\n A partir de seu ano de nascimento determinaremos a sua idade atual e a que tera em 2050 ");
	printf("\n Digite seu ano de nascimento ");
	scanf("%d",&nasc);
	printf("\n Digite o ano atual ");
	scanf("%d",&ano);
	idade=ano-nasc;
	id2050=2050-nasc;
	printf("\n Sua idade atual e : %d", idade);
	printf("\n Sua idade em 2050 sera : %d", id2050);
	
	return 0;
}
