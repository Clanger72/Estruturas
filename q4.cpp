#include <stdio.h>
#include <stdlib.h>
#include "q4.h"
/*Construa um programa que define um tipo novo de dados, para uma estrutura de um animal, deverá conter atributos como:
 raça, cor, peso e sexo.  E solicite ao usuário do programa 10 espécies e depois imprima em tela. */
 
 
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
