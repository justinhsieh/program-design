#include<stdio.h>

int main(){
    int n,num;
    scanf("%d",&n);
    int hex[10]={0,1,1,2,1,2,2,3,1,2};
    while(n--){
        scanf("%d",&num);
        int b1=0,b2=0,tmp=num;
        while(num>0){
            if(num%2==1){
                b1++;
            }
            num/=2;
        }
        while(tmp>0){
            b2+=hex[tmp%10];
            tmp/=10;
        }
        printf("%d %d\n",b1,b2);
    }
}

