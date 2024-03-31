#include<stdio.h>

int main(){
    int n,sum;
    while(scanf("%d",&n)!=EOF){
        if(n==0){
            break;
        }
        while(n>=10){
            sum=0;
            while(n>0){
                sum+=n%10;
                n/=10;
            }
            n=sum;
        }
        printf("%d\n",n);
    }
    return 0;
}

