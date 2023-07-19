#include "LinkedList.h"

void main()
{
	int i = 0;
	int Count = 0;
	Node* List = NULL;
	Node* Current = NULL;
	Node* NewNode = NULL;
	
	// 노드 5개 추가 
	for (i=0; i<5; i++)
	{
		NewNode = SLL_CreateNode(i);
		SLL_AppendNode(&List, NewNode);
	}
	
	// 헤드에 -1 추가 
	NewNode = SLL_CreateNode(-1);
	SLL_InsertNewHead(&List, NewNode);
	
	// 헤드에 -2 추가
	NewNode = SLL_CreateNode(-2);
	SLL_InsertNewHead(&List, NewNode);
	
	// 전체 노드 출력 
	Count = SLL_GetNodeCount(&List);
	for (i=0; i<Count; i++)
	{
		Current = SLL_GetNodeAt(List, i);
		printf("List[%d] : %d\n", i, Current->Data);
	}
	
	// 리스트 세번째 노드 뒤에 3000 삽입 
	printf("\nInserting 3000 After [2]...\n\n");
	
	Current = SLL_GetNodeAt(List, 2);
	NewNode = SLL_CreateNode(3000);
	SLL_InsertAfter(Current, NewNode);
	
	// 전체 노드 출력 
	Count = SLL_GetNodeCount(&List);
	for (i=0; i<Count; i++)
	{
		Current = SLL_GetNodeAt(List, i);
		printf("List[%d] : %d\n", i, Current->Data);
	}
	
	// 모든 노드를 리스트에서 제거
	printf("\n\nDestroying List..\n");
	
	Count = SLL_GetNodeCount(&List);
	for (i=0; i<Count; i++)
	{
		Current = SLL_GetNodeAt(List, 0);
		if (Current != NULL)
		{
			SLL_RemoveNode(&List, Current);
			SLL_DestroyNode(Current);
		}
	}
	
	// 전체 노드 출력 
	Count = SLL_GetNodeCount(&List);
	for (i=0; i<Count; i++)
	{
		Current = SLL_GetNodeAt(List, i);
		printf("List[%d] : %d\n", i, Current->Data);
	}
	printf("%d %d", List->Data, List->NextNode);
}
