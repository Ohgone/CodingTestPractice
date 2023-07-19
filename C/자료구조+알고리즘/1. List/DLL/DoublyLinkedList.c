#include "DoublyLinkedList.h"

Node* DLL_CreateNode(ElementType NewData){
	Node* NewNode = (Node*)malloc(sizeof(Node));
	
	NewNode->Data = NewData;
	NewNode->PrevNode = NULL;
	NewNode->NextNode = NULL;
	
	return NewNode;
}

void DLL_DestroyNode(Node* Node){
	free(Node);
}

void DLL_AppendNode(Node** Head, Node* NewNode){
	if ((*Head) == NULL){
		(*Head) = NewNode;
	} else {
		Node* Tail = (*Head);
		while (Tail->NextNode != NULL){
			Tail = Tail->NextNode;
		}
		Tail->NextNode = NewNode;
		NewNode->PrevNode = Tail;
	}
}

void DLL_InsertAfter(Node* Current, Node* NewNode){
	NewNode->NextNode = Current->NextNode;
	NewNode->PrevNode = Current;
	
	if (Current->NextNode != NULL){
		Current->NextNode->PrevNode = NewNode;
		Current->NextNode = NewNode;
	}

}

void DLL_RemoveNode(Node** Head, Node* Remove){
	if ((*Head) == Remove){
		(*Head) = Remove->NextNode;
		if ((*Head) != NULL){
			(*Head)->PrevNode = NULL;
		}
		Remove->NextNode = NULL;
		Remove->PrevNode = NULL;
	}
	else{
		Node* Current = Remove;
		if (Current->PrevNode != NULL){
			Current->PrevNode->NextNode = Current->NextNode;
		}
		if (Current->NextNode != NULL){
			Current->NextNode->PrevNode = Current->PrevNode;
		}
		Remove->NextNode = NULL;
		Remove->PrevNode = NULL;
	}
}

Node* DLL_GetNodeAt(Node* Head, int Location){
	Node* Current = Head;
	while (Current != NULL && (--Location) >= 0){
		Current = Current->NextNode;
	}
	return Current;
}

int DLL_GetNodeCount(Node* Head){
	int Count = 0;
	Node* Current = Head;
	while(Current != NULL){
		Current = Current->NextNode;
		Count++;
	}
	return Count;
}

void PrintNodes(Node* Head){
	int	Count = DLL_GetNodeCount(Head);
	int i = 0;
	Node* Current = Head;
	for (i=0; i<Count; i++){
		Current = DLL_GetNodeAt(Head, i);
		printf("LIST[%d] : %d\n", i, Current->Data);
	}
	printf("\n");
}

void PrintReverse(Node* Head){
	Node* Current = Head;
	unsigned int Count = 0;
	
	while(Current->NextNode != NULL){
		Current = Current->NextNode;
	}
	while(Current != NULL){
		printf("LIST[%d] : %d\n", Count++, Current->Data);
		Current = Current->PrevNode;
	}
	printf("\n");
}























