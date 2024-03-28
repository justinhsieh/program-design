#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int cmp(const void*a,const void*b){
    return *(int *)a-*(int *)b;
}
int main(){
    int t,i;
    while(scanf("%d",&t)==1){
        int a[t];
        for(i=0;i<t;i++){
            scanf("%d",&a[i]);
        }
        qsort(a,t,sizeof(int),cmp);
        int mid1,mid2;
        if(t%2==1){
            mid1=a[t/2];
            mid2=mid1;
        }
        else{
            mid1=a[t/2-1],mid2=a[t/2];
        }
        int min=65536,cnt=0;
        for(i=0;i<t;i++){
            int sum1=abs(a[i]-mid1),sum2=abs(a[i]-mid2);
            if(sum1>sum2){
                sum1=sum2;
            }
            if(sum1<min){
                min=sum1;
                cnt=1;
            }
            else if(sum1==min){
                cnt++;
            }
        }
        printf("%d %d %d\n",mid1,cnt,mid2-mid1+1);
    }
    return 0;
}
