#include <stdio.h>
typedef struct{
	char ten[30];
	int ma;
	float d1,d2,d3;	
}SV;
void nhap(SV *sv){
		getchar();
		fgets((p+i)->ten,30,stdin);
		scanf("%d",&(p+i)->ma);
		scanf("%f",&(p+i)->d1);
		scanf("%f",&(p+i)->d2);
		scanf("%f",&(p+i)->d3);
}

typedef struct tagNode{
	SV data;
	struct Node *next;
}Node;
typedef struct{
	Node *pHead;
	Node *pTail;
	int spt;
}LList;


int main(){
	
}
