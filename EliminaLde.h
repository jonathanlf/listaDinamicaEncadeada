//desalocando os endereços
void eliminaLde(lde* l){
	no* ptrProx;
	no* ptrAnt;
	ptrProx = l->inicio;
	//enquanto ptrProx não apontar para o fim da lista que é NULL, o laço será executado
	while(ptrProx){
		
		ptrAnt = ptrProx;
		ptrProx = ptrProx->prox;
		free(ptrAnt);	
	
	}
	printf("LISTA DINAMICA DESALOCADA COM SUCESSO!!\n");
	l->inicio = NULL;
}
