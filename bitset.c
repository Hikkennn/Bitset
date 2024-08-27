#include "bitset.h"

void initialize(BitSet s){
	int i;
	for(i=0; i<MAX; i++){
		s[i]= 0;
	}
}


void add(int elem,BitSet s){
	int i;
	int num;
	for(i=0; i<elem; i++){
		s[elem] = 1;
	}
}


void display(BitSet s){
	int i;
	for(i=0; i<MAX; i++){
		printf("%d ", s[i]);
	}
	
}


void getUnion(BitSet result,BitSet s1,BitSet s2){
	int i;
	for(i=0; i<MAX; i++){
		if(s1[i] || s2[i] == 1){
			result[i] = 1;
		}
	}
	
}


void intersection(BitSet result,BitSet s1,BitSet s2){
	int i;
	for(i=0; i<MAX; i++){
		if(s1[i] && s2[i] == 1){
			result[i] = 1;
		}
	}
	
}


void difference(BitSet result,BitSet s1,BitSet s2){
	int i;
	for(i=0; i<MAX; i++){
		if(s1[i] && !s2[i] == 1){
			result[i] = 1;
		}
	}
	
}


int isEmpty(BitSet s){
	int i, result = 0;
	for(i = 0; i < MAX; i++){
		if (s[i] == 0){
			result = 1;
			break;
		}
	}
	return result;
	
	//true = 0
	//false = 1
}


int contains(BitSet s,int elem){
	if(elem>=0 && elem<MAX){
		return s[elem];
	}
	return 0;
	
}


int disjoint(BitSet s1,BitSet s2){
	int i;
	for (i = 0; i < MAX; i++) {
	if (s1[i] && s2[i]) {
        return 0;
        }
    }
    return 1;
	
}


int equal(BitSet s1,BitSet s2){
	int i;
	for (i = 0; i < MAX; i++) {
        if (s1[i] != s2[i]) {
            return 0; // Not equal
        }
    }
    return 1; // Equal
	
}


int cardinality(BitSet s){
    int count = 0;
    int i;
    for (i = 0; i < MAX; i++) {
        if (s[i]) {
            count++;
        }
    }
    return count;	
	
}


int subset(BitSet s1,BitSet s2){
	int i, result = 1;
	for(i=0; i<MAX; i++){
		result = !(s1[i] && !s2[i]);
		break;
	}
	return result;	
	
}
