#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int delta=b*b-4*a*c;
    if(a==0){
        if(b==0){
            if(c==0){
                printf("pt co vo so nghiem");
            }else{
                printf("pt vo nghiem");
            }
        }else{
            printf("nghiem pt la:%d",-c/b);
        }
    }else{
        if(delta<0){
            printf("pt vo nghiem");
        }else if(delta==0){
            printf("nghiem pt la: %.2f",-(float)b/(2*a));
        }else{
            printf("nghiem pt la: x1=%.2f, x2=%.2f",(float)(-b-sqrt(delta))/(2*a),(float)(-b+sqrt(delta))/(2*a));
        }
    }
}