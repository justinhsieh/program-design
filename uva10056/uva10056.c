#include<stdio.h>

int main(){
    long long int s,d;
    while(scanf("%lld %lld",&s,&d)!=EOF){
        while(d>0){
            d-=s;
            if(d<=0){
                break;
            }
            s++;
        }
        printf("%lld\n",s);
    }
}

