#include<stdio.h>

int main(){
    int n;
    int bin[32];
    while(scanf("%d",&n)!=EOF){
        if(n==0){
            break;
        }
        int ans=0,cnt=0;
        while(n>0){
            if(n%2==1){
                ans++;
            }
            bin[cnt++]=n%2;
            n/=2;
        }
        printf("The parity of ");
        for(int i=cnt-1;i>=0;i--){
            printf("%d",bin[i]);
        }
        printf(" is %d (mod 2).\n",ans);
    }
}

