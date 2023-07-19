#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode
{
	ElementType Data;
	struct tagNode* NextNode;
} Node;

Node* SLL_CreateBode(ElementType NewData);
void SLL_DestroyNode(Node* Node);
void SLL_AppendNode(Node** Head, Node* NewNode);
void SLL_InsertAfter(Node* Current, Node* NewNode);
void SLL_InsertNewHead(Node** Head, Node* NewNHead);
void SLL_RemoveNode(Node** Head, Node* Remove);
Node* SLL_GetNodeAt(Node* Head, int Location);
int SLL_GetNodeCount(Node** Head);

#endif
