#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int i=1;
    while(i%a!=0||i%b!=0){
        i++;
    }
    printf("BSCNN: %d",i);
}