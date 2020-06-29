#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*inicializa una lista como vacía*/
void initlistaba(tlista* L){
	L.maxsize=MAXSIZE;
	L.listsize=0;
	L.curr=0;
	L.listarray=malloc(L.maxsize*sizeof(telemlista));
}
/*borra todos los elementos de una lista*/
void clearlistaba(tlista* L){
	free(L.listarray);
	L.listsize=L.curr=0;
	L.listarray=malloc(L.maxsize*sizeof(telemlista));
}
/*inserta un elemento en la posición ACTUAL de la lista*/
int insertlistaba(tlista* L, telemlista item) {
	unsigned int i = 0;
    	if (L.listsize >= L.maxsize)
    	return -1; // lista de largo máximo no se llena
    	for (i = L.listsize; i > L.curr; i--)
    	{
		L.listarray[i] = L.listarray[i - 1];//irá corriendo los elementos hacia la derecha hasta que se llegue a la posición actual
    	}
   	L.listarray[i] = item;
    	L.listsize++;
    	// retorna posición de inserción
    	return i;
}
// agrega un elemento al final de la lista
int appendlistaba(tlista* L, telemlista item) {
	if (L.listsize >= L.maxsize)
 	return 0;//lista llena
 	L.listarray[L.listsize++] = item;
 	return 1;//done
}
/*Elimina un elemento en la posición actual de la lista y devuelve su valor*/
telemlista eraselistaba(tlista* L) {
	telemlista item;
    	int i;
    	if (L.curr < 0 || L.curr >= l.listsize)
        	return -1;//Error de definicion de la lista
    	item = L.listarray[L.curr];
    	for (i = L.curr; i < L.listsize - 1; i++)//En la primera iteracion reemplaza el valor actual, ya que los elementos se van corriendo hacia la izquierda
    	{
        	L.listarray[i] = L->listarray[i + 1];
    	}
	L.listsize--;
    	return item;
}
//Mueve la pos actual al comienzo de la lista
void movetostartlba(tlista* L){
	L.curr=0;
}
//Mueve la pos actual al final de la lista
void movetoendlba(tlista* L){
	L.curr=L.listsize;
}
//Mueve la posición actual al siguiente elemento de la lista, no produce cambios si está en la cabeza de la lista
void nextlba(tlista* L){
	if i(L.curr!=0)
		L.curr=(L.curr)++;
}
//Mueve la posición actual al siguiente elemento de la lista, no produce cambios si está en la cabeza de la lista
void prevlba(tlista* L){
	if (L.curr!=L.listsize)
		L.curr=(L.curr)--;
}
//Retorna el numero de elementos de la lista
int lenghtlba(tlista* L){
	return L.listsize;
}
//Retorna la posición del elemento actual
int currposlba(tlista* L){
	return L.curr;
}
//Mueve la posición actual a la especificada
void movetoposlba(tlista* L,int newpos){
	L.curr=newpos;
}
//Obtiene el valor del elemento actual de la lista
telemlista getvaluelba(tlista L){
	return listarray[L.curr];
}
//Elimina de la lista eliminando memoria y recursos
void (tlista* L){
	free()
}
/
