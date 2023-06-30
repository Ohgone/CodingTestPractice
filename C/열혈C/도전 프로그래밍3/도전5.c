#include <stdio.h> // printf(), scanf()
#include <stdlib.h> // srand(), rand()
#include <time.h> // time()

#define WIN 1
#define DRAW 0
#define LOSE -1 

int rsp(Com, My){
	if(Com == My) return DRAW;
	if (Com == 1){
		if(My == 2){ return LOSE; }
		else{ return WIN; }
	}
	else if(Com == 2){
		if(My == 1){ return WIN; }
		else{ return LOSE; }
	}
	else{
		if(My == 1){ return LOSE; }
		else{ return WIN; }
	}
}

void main(){
	int w=0, d=0, l=0, My, Com;
	srand(time(NULL));
	
	while(1){
		Com = (rand() % 3) + 1;
		printf("가위바위보, 당신의 선택은? [바위:1] [가위:2] [보:3] ");
		My = scanf("%d", &My);
		
		if(rsp(Com, My) == WIN){ printf("당신은 이겼습니다.\n"); w++; }
		else if(rsp(Com, My) == DRAW){ printf("당신은 비겼습니다.\n"); d++; }
		else{ printf("당신은 졌습니다. 안녕히 가세요.\n"); l++; break; }}
		
	printf("게임 결과 : %d승 %d무 %d패", w, d, l);
}
