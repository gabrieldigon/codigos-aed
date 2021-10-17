#include <stdio.h>

int main(){
	float aux, notas, s[122];
	int tam = 0, porc;
	do{
		scanf("%f",&notas);
		s[tam] = notas;
		tam++;
	}while(notas != -1);
	
	tam--;
	
	do{
		scanf("%f",notas);
		s[tam] = notas;
		tam++;
	}while(notas != -1);
	tam--;
	
	porc = 0.2*tam;
	
	//printf("\n");
	for(int i = 0; i < tam/2; i++){
		for(int j = i+1; j<tam; j++){
			if(s[i] < s[j]){
				aux = s[i];
				s[i] = s[j];
				s[j] = aux;
			}
		}
		
	}
	
	//printf("\n");
	if(porc > 0) printf("%.2f\n", s[0]);
	for(int i = 1; i < porc; i++){
		if(s[i] != s[i-1]){
			printf("%.2f\n", s[i]);
		}
	}
}