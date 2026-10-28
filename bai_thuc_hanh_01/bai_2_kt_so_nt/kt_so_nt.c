#include <stdio.h>
#include<math.h>
int main(){
    int n;
    int tim=0;
    scanf("%d", &n);
    if(n<2){
        printf("khong phai so nt");
        return 0;
    }else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                tim=1;
                break;
            }
        }
    }
    if(tim==0){
        printf("la so nt");
    }else{
        printf("khong la so nt");
    }

}