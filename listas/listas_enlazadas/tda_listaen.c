//tipo de elemento de la lista
typedef int telemle;
//Struct nodo
typedef struct nodo {
	telemle info;// elemento guardado
	struct nodo* sig;//puntero de tipo nodo que apunta hacia el siguiente nodo
}tnodo;//se define el tipo de variable asociada a este nodo
//TDA LISTA
typedef struct{
	tnodo* head;// puntero a nodo cabezera de la lista
	tnodo* tail;//puntero a nodo cola de la lista
	tnodo* curr;//puntero al nodo actual
	unsigned int listensize;
	unsigned int pos;
}tlista
