int insereLde(lde* l, int valor){
	
	// criando espaço para alocar valores
	no *aux = malloc(1*sizeof(no));
	
	//inserindo o valor no espaço alocado
	aux->valor = valor;
	
	//colocando um ponteiro que aponta para NULL
	aux->prox = NULL;
	
	//Aqui o ponteiro ptrProx aponta para o início da fila
	no *ptrProx = l->inicio;
	no *ptrAnt = NULL;
	
	while(ptrProx && valor > ptrProx->valor){
		
		ptrAnt = ptrProx;
		ptrProx = ptrProx->prox;
	}
	
	if(!ptrAnt){
		l->inicio = aux;
		aux->prox = ptrProx;
	}
	else{
		
		ptrAnt->prox = aux;
		aux->prox = ptrProx;	
	}
	
	return 0;
}
