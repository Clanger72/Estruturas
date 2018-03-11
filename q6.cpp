#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "q6.h"

/*Faça um programa que cadastre o nome e o salário de 10 funcionário, liste todos os dados dos funcionários das seguintes 
formas:

a) em ordem crescente de salário;
b) em ordem decrescente de salário;
c) em ordem alfabética;
*/

void crescente();
//void decrescente();

int main (void){
	setlocale(LC_ALL,"");
	Funcionario f[3];
	int i;
	printf("\tCadastro de funcionarios\n");
	for(i=0; i<3; i++){
		printf("----------------------------------------\n");
		printf("\tNome: ");
		gets(f[i].nome);
		fflush(stdin);
		
		printf("\tSalario: ");
		scanf("%f", &f[i].salario);
		fflush(stdin);
	}
	crescente();
	return 0;
	
//	decrescente();
}

void crescente(){
	setlocale(LC_ALL,"");
	Funcionario f[3];
	int i, j;
	float aux;
	for(j=1; j<=3; j++){
		for(i=3; i>=j; i--){			
			if(f[i].salario < f[i+1].salario){
				printf("%.2f", f[i].salario);
				aux = f[i].salario;
				f[i].salario = f[i+1].salario;
				f[i+1].salario = aux;
				printf("teste\n");
			}
		}
	}
	printf("\n");
	printf("Ordem Crescente\n");
	printf("----------------------------------------\n");
	for(i=0; i<3; i++){
		printf("Nome: %s\n", f[i].nome);
		printf("Salario: %.2f\n", f[i].salario);
	}	
}

/*void decrescente(){
	Funcionario f[3];
	int y, n;
	float aux1;
	for(n=3; n>=0; n--){
		for(y=0; y<=3; y++){
			if(f[y].salario > f[y-1].salario){
				aux1 = f[y].salario;
				f[y].salario = f[y-1].salario;
				f[y-1].salario = aux1;
			}
		}
	}
	printf("\n");
	printf("Ordem Decrescente\n");
	printf("----------------------------------------\n");
	for(y=0; y<3; y++){
		printf("Nome: %s\n", f[y].nome);
		printf("Salario: %.2f\n", f[y].salario);
	}	
}*/
