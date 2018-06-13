#include <stdio.h>
#include <stdlib.h>
#include "Escalonador.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int opcao;
	Escalonador *e = NULL;
	
	do{
		system("CLS");
		printf("\n(1)Carregar Arquivo");
		printf("\n(2)Setar Configuracoes");
		printf("\n(3)Executar Escalonamento FCFS (cooperativo)");		
		printf("\n(4)Executar Escalonamento Round Robin (preemptivo)");		
		printf("\n(5)Executar Escalonamento SJF (cooperativo)");		
		printf("\n(6)Executar Escalonamento SRTF (preemptivo)");		
		printf("\n(7)Executar Escalonamento por prioridades (cooperativo)");		
		printf("\n(8)Executar Escalonamento por prioridades (preemptivo)");
		printf("\n(9)Sair");
		printf("\n\nDigite uma opcao: ");
		scanf("%d",&opcao);
		switch (opcao){
			case 1:{
				e = carregarProcessos();
				break;
			}			
			case 2:{
				setarConfiguracoes(e);
				break;
			}			
			case 3:	{
				executarFCFS(e);
				break;
			}
			case 4:{
				executarRoundRobin(e);
				break;
			}			
			case 5:{
				printf("Fazer");
				break;
			}				
			case 6:	{
				printf("Fazer");
				break;
			}
			case 7:{
				printf("Fazer");
				break;
			}			
			case 8:{
				printf("Fazer");
				break;
			}				
			case 9:	{				
				break;
			}
			default: {
				return 0;
			}
				
		}
		
	}while(opcao!=9);
			
	return 0;
}
