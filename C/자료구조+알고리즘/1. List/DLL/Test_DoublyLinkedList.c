#include "DoublyLinkedList.h"

void main(){
	int i = 0;
	int Count = 0;
	Node* List = NULL;
	Node* NewNode = NULL;
	Node* Current = NULL;
	
	// 노드 5개 추가 
	for (i=0; i<5; i++){
		NewNode = DLL_CreateNode(i);
		DLL_AppendNode(&List, NewNode);
	}
	
	// 전체 노드 출력 
	PrintNodes(List); 
	
	printf("\n\nInserting 3000 After [2]\n");
	Current = DLL_GetNodeAt(List, 2);
	NewNode = DLL_CreateNode(3000);
	DLL_InsertAfter(Current, NewNode); 
	
	// 전체 노드 출력 
	PrintNodes(List); 
	
	// 전체 노드 역출력 
	PrintReverse(List);

}
