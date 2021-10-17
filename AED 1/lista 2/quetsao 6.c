#include <stdio.h>

void desenharZ(void){

	char simbolo;

	scanf(" %c", &simbolo);

	int l, c;
	const int N = 10;

	for(l = 1; l <= N; l++) printf("%c", simbolo);

	printf("\n");

	for(l = 1; l <= N; l++){

		for(c = 1; c <= N; c++){

			if(c == (N - (l - 1))) printf("%c", simbolo); else printf(" ");

		}

		printf("\n");

	}

	for(l = 1; l <= N; l++) printf("%c", simbolo);

	printf("\n");

}

int main(void){

	desenharZ(); // Chamada da função que desenha o Z, apague ao submeter seu programa

	return 0;

}