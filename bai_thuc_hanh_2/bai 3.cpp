#include <stdio.h>
#include <string.h>

typedef struct{
	char ten[30];
	int ma;
	float d1,d2,d3;
		
}SV;

void nhap(SV *p, int n){
	for(int i=0;i<n;i++){
		getchar();
		fgets((p+i)->ten,30,stdin);
		scanf("%d",&(p+i)->ma);
		scanf("%f",&(p+i)->d1);
		scanf("%f",&(p+i)->d2);
		scanf("%f",&(p+i)->d3);
	}
}
void in(SV *p, int n){
	for(int i=0;i<n;i++){

		printf("%s",(p+i)->ten);
		printf("%d\n",(p+i)->ma);
		printf("%.2f\n",(p+i)->d1);
		printf("%.2f\n",(p+i)->d2);
		printf("%.2f\n",(p+i)->d3);
	}
}

int main(){
	int n;
	SV ds[1000];
	SV *p=ds;
	scanf("%d",&n);
	nhap(ds,n);
	in(ds,n);
}
