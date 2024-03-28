#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int train,i,j,cnt=0;
        scanf("%d",&train);
        int a[train];
        for(i=0;i<train;i++){
            scanf("%d",&a[i]);
        }
        for(i=1;i<train;i++){
            for(j=0;j<train-i;j++){
                if(a[j]>a[j+1]){
                    int tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                    cnt++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",cnt);
    }
    return 0;
}
