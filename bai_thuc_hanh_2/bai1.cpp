#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	float a[1000];
	float *p=a;
	for(int i=0;i<n;i++){
		scanf("%f",p+i);
	}
	for(int i =0;i<n;i++){
		printf("%.2f ",*(p+i));
	}
}
