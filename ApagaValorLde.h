int apagaValorLde(lde* l, int valor){
	
	no* ptrProx;
	no* ptrAnt = NULL;
	
	ptrProx = l->inicio;
	
	while(ptrProx && valor > ptrProx->valor){
		ptrAnt = ptrProx;
		ptrProx = ptrProx->prox;
	}
	
	if(ptrProx){
		
		if(ptrProx->valor==valor)
		{
			if(!ptrAnt){
				
				l->inicio = ptrProx->prox;
				printf("VALOR %d EXCLUIDO COM SUCESSO!\n", ptrProx->valor);
				free(ptrProx);
				
				return 0;
				
			}else{
				
				ptrAnt->prox = ptrProx->prox;
				printf("VALOR %d EXCLUIDO COM SUCESSO!\n", ptrProx->valor);
				free(ptrProx);
				return 0;
			}
		}
		else{
			printf("O VALOR %d NAO EXISTE NA LISTA!\n",valor);	
			return 0;
		}
	}
	else
	{
		printf("O VALOR %d NAO EXISTE NA LISTA!\n",valor);
		return 0;
	}

}
