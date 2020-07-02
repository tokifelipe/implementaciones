//Tipo de elemento del arbol
typedef int tipotree;
//Struct con información del arbol
typedef struct {
	tnodotreebin* raiz;//puntero hacia la raiz
	int nelemen;
}tabb;
//Tda para un nodo del arbol
typedef struct nodotreebin{
	tipotree info;
	struct nodotreebin* izq;//puntero hacia el hijo izquierdo
	struct nodotreebin* der;//puntero hacia el hijo derecho
}tnodotreebin


