#include <stdio.h>
#include "SimpleHeap.h"
int DataPriorityComp(char ch1, char ch2) {
	return ch2 - ch1;
}
int main(void) {
	Heap heap;
	HeapInit(&heap, DataPriorityComp);

	HInsert(&heap, 'A');
	HInsert(&heap, 'B');
	HInsert(&heap, 'C');
	printf("%c \n", HDelete(&heap));

}