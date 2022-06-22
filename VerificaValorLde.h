typedef struct NO no;
struct NO {
	int valor;
	no *prox;
};

typedef struct LDE{
	no* inicio;
}lde;

//Recebe a Lde e um valor inteiro e depois verifica se o valor existe na lista
int VerificaValorLde(lde* l, int valor){
	
	no* ptrProx;

	ptrProx = l->inicio;
	
	while(ptrProx && valor > ptrProx->valor)
	{
		ptrProx = ptrProx->prox;	
	}
	
	if(ptrProx){
		
		if(ptrProx->valor==valor)
		{	
			return ptrProx->valor;
		}
	}
	return 0;
}
