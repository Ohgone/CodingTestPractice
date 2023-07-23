#include "CDLL.h"

Node* CDLL_CreateNode(ElementType NewData){
	Node* NewNode = (Node*)malloc(sizeof(Node));
	
	NewNode->Data = NewData;
	NewNode->NextNode = NULL;
	NewNode->PrevNode = NULL;
	return NewNode;
}

void CDLL_DestroyNode(Node* Node){
	free(Node);
}

void CDLL_AppendNode(Node** Head, Node* NewNode){
	if ((*Head) == NULL){
		*Head = NewNode;
		(*Head)->NextNode = *Head;
		(*Head)->PrevNode = *Head;
	} else{
		Node* Tail = (*Head)->PrevNode;
		
		Tail->NextNode->PrevNode = NewNode;
		Tail->NextNode = NewNode;
		
		NewNode->NextNode = (*Head);
		NewNode->PrevNode = Tail;
	}
}

void CDLL_InsertAfter(Node* Current, Node* NewNode){
	NewNode->NextNode = Current->NextNode;
	NewNode->PrevNode = Current;
	
	if(Current->NextNode != NULL){
		Current->NextNode->PrevNode = NewNode;
		Current->NextNode = NewNode;
	}
}

void CDLL_RemoveNode(Node** Head, Node* Remove){
	if((*Head) == Remove){
		(*Head)->PrevNode->NextNode = Remove->NextNode;
		(*Head)->NextNode->PrevNode = Remove->PrevNode;
		(*Head) = Remove->NextNode;
		Remove->NextNode = NULL;
		Remove->PrevNode = NULL;
	} else{
		Remove->PrevNode->NextNode = Remove->NextNode;
		Remove->NextNode->PrevNode = Remove->PrevNode;
		Remove->NextNode = NULL;
		Remove->PrevNode = NULL;
	}
}

Node* CDLL_GetNodeAt(Node* Head, int Location){
	Node* Node = Head;
	while(Node != NULL && (--Location) >= 0){
		Node = Node->NextNode;
	}
	return Node;
}

int CDLL_GetNodeCount(Node* Head){
	int Count;
	Node* Current = Head;
	while(Current != NULL){
		Current = Current->NextNode;
		Count++;
		if(Current == Head){
			break;
		}
	}
	return Count;
}
