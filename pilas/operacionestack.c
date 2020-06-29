//inserta un elemento en el tope de la pila
int push (tpila* P,telempila item){
	if(P.top==P.maxsize) return 0;
	P.stackarray[P.top++]=item;//POSTINCREMENTO
	return 1;
}
//inicializa una pila vacia
void initstack(tpila* P){
	P.maxsize=tamMax;
	P.top=0;//POSTINCREMENTO
	P.stackarray=malloc(P.maxsize*sizeof(telempila));
}
//Reinicia una pila como vacía
void clearstack(tpila* P){
	P.maxsize=tamMax;
	P.top=0;
	free(P.stackarray);
	P.stackarray=malloc(P.maxsize*sizeof(telempila));
}
//Elimina una pila
void deletestack(tpila* P){
	free((void *)P.stackarray);
}
//Elimina el elemento que está en el tope de la pila
void pop(tpila* P){
	P.top--;
}
//retorna una copia del elemento que está en el tope de la pila
telempila topvaluestack(tpila* P){
	return P.stackarray[P.top];
}
//tamaño actual de la pila
int sizestack(tpila* P){
	return P.top;
}




