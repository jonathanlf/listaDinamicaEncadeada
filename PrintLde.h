void printLde(lde* l){
	
	no* ptrProx;
	no* ptrAnt = NULL;
	
	ptrProx = l->inicio;
	
	if(!ptrProx){
		printf("LISTA VAZIA\n");
	}
	
	while(ptrProx){
		
		printf("%-4i",ptrProx->valor);
		ptrAnt = ptrProx;
		ptrProx = ptrProx->prox;
	}
}
