#include <stdio.h>
#include <stdlib.h>
#include "bitset.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	BitSet s1;
	BitSet s2;
	BitSet result;
	
	
	initialize(s1);
	initialize(s2);
	initialize(result);
	
	add(6, s1);
	add(6, s2);
	display(s);


	getUnion(result, s1, s2);

	intersection(result, s1, s2);

	int i;
	for(i=0; i<MAX; i++){
		printf("%d ", result[i]);
	}
	return 0;
}


