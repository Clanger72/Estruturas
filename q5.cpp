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
	printf("\tIncluir Pe�as!\n");
	printf("------------------------------\n");
	printf("C�digo: ");
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
	
	printf("Pre�o: ");
	scanf("%f", &p.peco);
}

void saida(){
	Peca p;
	printf("\n");
	printf("\tPe�a incluida!\n");
	printf("-----------------------------\n");
	printf("C�digo: %d\n", p.codigo);
	printf("Nome: %s\n", p.nome);
	printf("Cor: %s\n", p.cor);
	printf("Peso: %.2f\n", p.peso);
	printf("Pre�o: %.2f", p.peco);
}
