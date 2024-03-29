#include<stdio.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int cola=n;
        while(n>2){
            cola=cola+n/3;
            n=n/3+n%3;
        }
        if(n==2){
            cola++;
        }
        printf("%d\n",cola);
    }
    return 0;
}
