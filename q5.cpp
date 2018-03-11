#include <stdio.h>
#include <stdlib.h>
#include "q5.h"
#include <locale.h>

void entrada();
void saida();

int main (void){
	setlocale(LC_ALL,"");
	Peca p;
	entrada();
	saida();
}

void entrada(){
	Peca p;
	printf("\tIncluir Peças!\n");
	printf("------------------------------\n");
	printf("Código: ");
	scanf("%d", &p.codigo);
	fflush(stdin);
	
	printf("Nome: ");
	gets(p.nome);
	fflush(stdin);
	
	printf("Cor: ");
	gets(p.cor);
	fflush(stdin);
	
	printf("Peso: ");
	scanf("%f", &p.peso);
	fflush(stdin);
	
	printf("Preço: ");
	scanf("%f", &p.peco);
}

void saida(){
	Peca p;
	printf("\n");
	printf("\tPeça incluida!\n");
	printf("-----------------------------\n");
	printf("Código: %d\n", p.codigo);
	printf("Nome: %s\n", p.nome);
	printf("Cor: %s\n", p.cor);
	printf("Peso: %.2f\n", p.peso);
	printf("Preço: %.2f", p.peco);
}
