//inicializa una abb como vacio
void initree(tabb* T){
	T.raiz=NULL;
	nelemen=0;
}
//Elimina todos los elementos de un abb ,dejandolo vacio
/*FUNCION PRINCUPAL*/
void clearabb(tabb* T){
	clearhelp(T.raiz);
	T.raiz=NULL;
	T.nelemen=0;
}
/*Funcion auxiliar*/
void clearhelp(tnodotreebin* nodo){//impleneta postorden
	if (nodo==NULL)return;//tree vacio
	clearhelp(nodo.izq);
	clearhelp(nodo.der);
	free(nodo);
}
//Recorrido in-orden de un ABB
/*Funcion principal*/
void inorden(tabb *T){
	inordenhelp(T.raiz)
}
/*Funcion aux*/
void inordenhelp(tnodotreebin *nodo)
{
	if (nodo=NULL) return;
	inordenhelp(nodo.izq);
	procesar(getvalueabb(nodo));//procesa nodo¿?,lo podria imprimir
	inordenhelp(nodo.der);
}
//busca un item en un ABB T, retorna 0 en caso de no encontartlo.
/*Funcion principal*/
int find (tabb* T,tipotree item){
	return findhelp(T.raiz, item);
}
/*Funcion aux*/
int findhelp(tnodotreebin* nodo, tipotree item){
	if(nodo==NULL) return 0;
	if (getvalueabb(nodo)==item) return 1;
	if (item<getvalueabb(nodo))
		return finhelp(nodo.izq,item);
	else
		return findhelp(nodo.der,item);
}
//devuelve el item de un nodo 
tipotree getvalue(tnodotreebin* nodo)
{
	return nodo.info
}

//Inserta un elemento item en el abb
/*Funcion principal*/
int insertabb (tabb* T,tipotree item){
	return insertabbhelp(T.raiz, item);
}
/*Funcion aux*/
int insertabbhelp(tnodotreebin* nodo, tipotree item){
	if(item<getvalueabb(nodo))
	{
		if(nodo.izq==NULL){
			nodo(void *)=malloc(sizeof(tnodotreebin));
			nodo.info=item;
			nodo.izq==NULL;
			nodo.der=NULL;
			return 1;
		}
		return insertabbhelp(nodo.izq,item);
	}
	else (item>getvalueabb(nodo))
	{
		if(nodo.der==NULL){
			nodo(void *)=malloc(sizeof(tnodotreebin));
			nodo.info=item;
			nodo.izq==NULL;
			nodo.der=NULL;
			return 1;
		}
		return insertabbhelp(nodo.der,item);	
	}
	else
	{
		return 0;
	}

}
//Recorrido in-orden de un ABB para contar la cantidad de elementos
/*Funcion principal*/
void sizeabb(tabb *T){
	int * c;
	sizeabbhelp(T.raiz,c)
	return (*c);
}
/*Funcion aux*/
void sizeabbhelp(tnodotreebin *nodo,int * c)
{
	if (nodo=NULL) return;
	*c++;
	sizeabbhelp((nodo.izq);
	sizeabbhelp((nodo.der);
}
//Recorrido pre-orden de un ABB T
/*Funcion principal*/
void pre(tabb *T){
	prehelp(T.raiz)
}
/*Funcion aux*/
void prehelp(tnodotreebin *nodo)
{
	if (nodo=NULL) return;
	procesar(getvalueabb(nodo));//procesa nodo¿?,lo podria imprimir
	prehelp(nodo.izq);
	prehelp(nodo.der);
}


//Recorrido pre-orden de un ABB T
/*Funcion principal*/
void post(tabb *T){
	posthelp(T.raiz)
}
/*Funcion aux*/
void posthelp(tnodotreebin *nodo)
{
	if (nodo=NULL) return;
	posthelp(nodo.izq);
	posthelp(nodo.der);
	procesar(getvalueabb(nodo));//procesa nodo¿?,lo podria imprimir
}

