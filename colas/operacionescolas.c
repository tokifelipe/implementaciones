//Inicializa una nueva cola vacía
void initqueue(queue* Q){
	Q.prim=0;
	Q.ult=-1;
	Q.maxsize=MAX_SIZE;
	Q.qArray=malloc(sizeof(telemenqueue)*MAX_SIZE);
}

//Elimina la cola
void destroyqueue(queue* Q)
{
	free((void*)Q.qArray);

}
//Inserta un elemento al final de la cola
int enqueue(queue* Q,telemenqueue item){
	Q.ult++;
	if (Q.ult==MAX_SIZE)
		Q.ult=0;
	Q.qArray[Q.ult]=elem;
}
//Elimina el elemento que esta en el frente de la cola
void dequeue(queue* Q){
	Q.prim++;
	if(Q.prim==MAX_SIZE)
	{
		Q.prim=0;
	}
}
//Retorna una copia del elemento que está en el frente de la cola
telemenqueue frontvaluequeue(queue *Q)
{
	return Q.qArray[Q.prim];
}
//Retorna el tamaño de la cola
int sizequeue(telemenqueue* Q)
{


}
	
