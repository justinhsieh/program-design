#include<stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);
    for(int k=1;k<=n;k++){
        int x1,x2,y1,y2;
        long long int sum=0;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        for(i=x1+y1+1;i<=x2+y2;i++){
            sum+=i;
        }
        sum=sum+x2-x1;
        printf("Case %d: %lld\n",k,sum);
    }
    return 0;
}
