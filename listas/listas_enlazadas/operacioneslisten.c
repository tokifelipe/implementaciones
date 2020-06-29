//Inserta un elemento en la posición actual de la lista,mejor dicho en la posición actual mas uno, ya que agrega al siguiente de la posición actual
int insertle(tlisten* L,telemle item){
	tnodo* aux=L.curr.sig;// aux sera el puntero que tiene el tnodo actual(los tnodos tienen un puntero hacia el siguiente)
	L.curr.sig=malloc(sizeof(tnodo));//se pide un puntero nuevo que vaya al nuevo tnodo
	L.curr.sig.info=item;
	L.curr.sig.sig=aux;
	if (L.curr==L.tail) L.tail=L.curr.sig;
	L.listensize++;
	return L.pos;
}
//Borra el elemento actual mas uno y retorna su valor
telemle erasele(tlisten *L){
	//Falta el caso de que se quiera eliminar el final
	tnodo* aux=L.curr.sig.sig;
	L.curr.sig.item=r;
	L.curr.sig=aux;
	free(aux);
	return r;
		
}
//Posicionar al inicio de la lista
void movetostartle(tlisten *L){
	L.curr=L.head;
	L.pos=0;
}
//Mueve al final de la lista
void movetoendle(tlisten* L){
	L.curr=L.tail;
	L.pos=L.listensize
}
//Mueve el elemento actual al anterior(no mueve los valores)
void prevle(tlisten*L);
{
	tnodo *temp;
	if (L.curr==L.head) return;
	temp=L.head;
	while (temp.sig!=L.curr) temp=temp.sig;
	L.curr=temp;
	L.pos--;
}
//Mueve el elemento actual al siguiente
void nextle(tlisten* L)
{
	if(L.curr !=L.tail) {
		L.curr=L.curr.sig;
		L.pos++;
	}
}
//va hacia la posicon elegida
void movetoposle(tlisten *L,unsigned int posicion){
	unisigned int i;
	if(posicion<0||posicion>L.listensize) return;
	L.curr=L.head;
	L.pos=0;
	for(i=0;i<posicion;i++)
	{
		L.curr=L.curr.sig;
		L.pos++;
	}
}

