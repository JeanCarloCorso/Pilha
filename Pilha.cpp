#include<stdio.h> 
#include<stdlib.h>

int main()
{
	int fim = 0;
	int pilha[10];
	int ponteiro = -1;
	while (fim == 0)
	{
		int escolha;
		printf("\nInsira 1 para POP(enpilhar)");
		printf("\nInsira 2 para PUSH(desempilhar) ");
		printf("\nInsira 3 para listar a pilha");
		printf("\nInsira 4 para sair ");
		scanf_s("%d", &escolha);
		fflush(stdin);
		if (escolha == 1){
			if (ponteiro < 9){
				ponteiro++;
				printf("\nInforme o valor a ser empilhado ");
				scanf_s("%d", &pilha[ponteiro]);
				fflush(stdin);
				printf("\n\n\n\nValor salvo na pilha!\n\n\n\n");
			}
			else{
				printf("\n\n\n\nA pilha esta cheia!!!\n\n\n\n");
			}
		}
		else if (escolha == 2){
			if (ponteiro < 0){
				printf("\n\n\n\nA pilha esta vasia!!!\n\n\n\n");
			}
			else{
				printf("\n\nO valor %d foi desempilhado \n\n", pilha[ponteiro]);
				ponteiro--;
			}
		}
		else if (escolha == 3){
			if (ponteiro > -1){
				printf("\n\n\n\nO conteudo da lista é:\n\n");
				for (int i = 0; i <= ponteiro; i++){
					printf(" %d", pilha[i]);
					printf("; ");
				}
				printf("\n\n\n\n");
			}
			else{
				printf("\n\n\n\nA pilha esta vasia!!!\n\n\n\n");
			}
		}
		else if (escolha == 4){
			fim--;
		}
		else{
			printf("\n\n\n\nComando não reconhecido pelo sistema!!!\n\n\n\n");
		}
	}
}