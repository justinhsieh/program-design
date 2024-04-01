#include<stdio.h>

int main(){
    int n,a,b;
    scanf("%d",&n);
    for(int k=1;k<=n;k++){
        scanf("%d%d",&a,&b);
        int sum=0;
        for(int i=a;i<=b;i++){
            if(i%2==1){
                sum+=i;
            }
        }
        printf("Case %d: %d\n",k,sum);
    }
}

