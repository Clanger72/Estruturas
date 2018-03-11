#include <stdio.h>
#include <stdlib.h>
#include "q4.h"
 
int main (void){
 	Animal a[3];
	int i;
	for(i=0; i<3; i++){
		printf("Digite a raca: ");
		gets(a[i].raca);
		fflush(stdin);
		
		printf("Digite a cor: ");
		gets(a[i].cor);
		fflush(stdin);
		
		printf("Digite o sexo: ");
		scanf("%c", &a[i].sexo);
		fflush(stdin);
		
		printf("Digite o peso: ");
		scanf("%f", &a[i].peso);
		fflush(stdin);
		system("cls");
	}	
	for(i=0; i<3; i++){
		printf("Raca: %s\n", a[i].raca);
		printf("Raca: %s\n", a[i].cor);
		printf("Raca: %c\n", a[i].sexo);
		printf("Raca: %.2f\n", a[i].peso);
	}
}
