//tipo de dato del stack
typedef int telemenqueue;
typedef struct {
	int maxsize;//Tamaño maximo de la cola
	int prim;//posicion del primer elemento
	int ult;//posicion del ultimo elemento
	telemenqueue *qArray;
}queue;
