
struct nodo {
int chiave;
struct nodo *succ;
struct nodo *prec;
};
typedef struct nodo nodo;



nodo *FondiPariDispari( nodo*, nodo* );
