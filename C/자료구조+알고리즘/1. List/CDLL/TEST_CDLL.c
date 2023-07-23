#include "CDLL.h"

void main(){
	int i = 0;
	int Count = 0;
	Node* List = NULL;
	Node* NewNode = NULL;
	Node* Current = NULL;
	
	for (i=0; i<5; i++){
		NewNode = CDLL_CreateNode(i);
		CDLL_AppendNode(&List, NewNode);
	}
	
	NewNode = CDLL_CreateNode(10);
	Current = CDLL_GetNodeAt(List, 4);
	CDLL_InsertAfter(Current, NewNode);
	
	Count = CDLL_GetNodeCount(List);
	for (i=0; i<Count; i++){
		Current = CDLL_GetNodeAt(List, i);
		printf("LIST[%d] : %d\n", i, Current->Data);
	}
}
