#include "btree.h"

int main(){

	// int reg[] = {10,2,7,5,3,9,16,4,11,1,6,23,14};
	int reg[] = {7,9,12,22,10,61,74,40,31,85,91,80,98,55, 1,33,99,54,13};
	int tam = sizeof(reg)/sizeof(reg[0]);
	
	int remove[] = {55,91,7,1,9,40,80};
	int tamR = sizeof(remove)/sizeof(remove[0]);
	
	Record r;
  	Pagina *btree = CreateBTree();

  	for(int i=0; i<tam; i++){
    	r.key = reg[i];
    	Insere(&btree, r);
  	}

	printf("Arvore com todos os valores inseridors\n\n");
  	Imprime(&btree, 0);

	for(int i=0; i<tamR; i++){
		printf("\nremovendo o valor: %d\n\n", remove[i]);
		Retira(&btree, remove[i]);
		Imprime(&btree, 0);
  	}
	
	printf("\nArvore com os valores {55,91,7,1,9,40,80} removidos\n\n");
	Imprime(&btree, 0);
	
	return 0;

}