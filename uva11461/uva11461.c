#include<stdio.h>

int main(){
    int n,test=1;
    int data[100];
    int ans[10000];
    while(scanf("%d",&n)!=EOF){
        int i,j,cnt=0,flag=1;
        for(i=0;i<n;i++){
            scanf("%d",&data[i]);
            if(data[i]<1){
                flag=0;
                break;
            }
        }
        for(i=0;i<n-1;i++){
            if(data[i]>=data[i+1]){
                flag=0;
                break;
            }
            for(j=i;j<n;j++){
                ans[cnt++]=data[i]+data[j];
            }
        }
        for(i=0;i<cnt-1;i++){
            for(j=i+1;j<cnt;j++){
                if(ans[i]==ans[j]){
                    flag=0;
                }
            }
        }
        if(test>1){
            printf("\n");
        }
        if(flag){
            printf("Case #%d: It is a B2-Sequence.\n",test++);
        }
        else{
            printf("Case #%d: It is not a B2-Sequence.\n",test++);
        }
    }
}

