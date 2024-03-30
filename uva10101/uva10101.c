#include<stdio.h>

void bangala(long long int);
int main(){
    long long int n,cnt=1;
    while(scanf("%lld",&n)!=EOF){
        printf("%4d. ",cnt++);
        if(n==0){
            printf("0");
        }
        else{
            bangala(n);
        }
        printf("\n");
    }
    return 0;
}
void bangala(long long int n){
    while(n>=10000000){
        bangala(n/10000000);
        printf("kuti ");
        n%=10000000;
    }
    if(n>=100000){
        printf("%lld lakh ",n/100000);
        n%=100000;
    }
    if(n>=1000){
        printf("%lld hajar ",n/1000);
        n%=1000;
    }
    if(n>=100){
        printf("%lld shata ",n/100);
        n%=100;
    }
    if(n>0){
        printf("%lld ",n);
    }
}
