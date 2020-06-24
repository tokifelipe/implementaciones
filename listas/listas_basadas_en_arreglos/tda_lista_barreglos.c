/*Tipo de datos de la lista:*/
typedef int telemlista;
/*Struct*/
typedef struct{
	unsigned int maxsize; //tamaño máximo
	unsigned int listsize;//tamaño actual
	unsigned int curr;// posición actual de la lista
	telemlista* listarray; //Definición del arrglo con los elementos de la lista
	}tlista;
