#include <stdio.h>

int imprime(){
	int idade1, Peso;
	float Altura;
	idade1 = inserir();
	Peso = peso();
	Altura = altura();
	printf("Idade: %d\n", idade1);	
	printf("Peso: %d\n", Peso);	
	printf("Altura: %.2f\n", Altura);
	return 0;
}
