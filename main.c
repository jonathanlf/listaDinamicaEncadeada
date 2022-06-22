#include <stdio.h>
#include <stdlib.h>
#include "verificaValorLde.h"
#include "PrintLde.h"
#include "InsereLde.h"
#include "InicializaLde.h"
#include "EliminaLde.h"
#include "limpaTela.h"
#include "ApagaValorLde.h"
#include "InformacoesAdicionais.h"

void menu(lde* l){
	
	int opcao;
	int valor;
	int resultado;
	informacoesAdicionais();
  
	do{
		
		LimpaTela();
		printf("\tMENU\n");
		printf("1 - INSERIR VALOR NA LDE\n");
		printf("2 - IMPRIMIR LISTA\n");
		printf("3 - VERIFICAR SE VALOR EXISTE\n");
		printf("4 - APAGAR VALOR DA LDE\n");
		printf("5 - ELIMIAR LDE\n");
		printf("6 - SAIR\n\n");
		
			printf("DIGITE A OPCAO DESEJADA: ");
			scanf("%d",&opcao);
			fflush(stdin);
			
			if(opcao<1 || opcao>6){
				
				printf("opcao invalida!!\n")
				opcao = 7; // quando a opcao for inválida, a variável opcao recebe um valor inteiro inválido.
				system("pause");
				LimpaTela();
				
			}else
				{	
			
					switch(opcao){
						case 1: 
								LimpaTela();
								printf("DIGITE O VALOR A SER INSERIDO: ");
								scanf("%d",&valor);
								insereLde(l,valor);
							break;
						case 2:
								LimpaTela();
								printf("lista: ");
								printLde(l);
								printf("\n");
								system("pause");
								LimpaTela();
							break;
						case 3:
								printf("DIGITE O VALOR A SER ENCONTRADO: ");
								scanf("%d",&valor);
								fflush(stdin);
								
								if(VerificaValorLde(l,valor)){
									printf("valor %d, encontrado!\n",VerificaValorLde(l,valor));
									system("pause");
									LimpaTela();
								}
								else
								{
									printf("O valor nao existe na lista!\n");
									system("pause");
									LimpaTela();	
								}
							break;
						case 4:
								printf("DIGITE O VALOR A SER EXCLUIDO: ");
								scanf("%d",&valor);
								fflush(stdin);
								
								apagaValorLde(l,valor);
								system("pause");
								LimpaTela();
							break;
						case 5:
								eliminaLde(l);
								system("pause");
								LimpaTela();
							break;
					}
				}
						
		}while((opcao>=1 && opcao!=6) || opcao<0);
}

int main(int argc, char *argv[]) {
	
	lde l;	
	int confere = -1;
	menu(&l);
	
	return 0;
}
