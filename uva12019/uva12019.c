#include<stdio.h>
#include<math.h>

int main(){
    int n,i,j;
    while(scanf("%d",&n)!=EOF){
        int data[n];
        for(i=0;i<n;i++){
            scanf("%d",&data[i]);
        }
        for(i=0;i<n-1;i++){
            data[i]=abs(data[i]-data[i+1]);
        }
        for(i=1;i<n-1;i++){
            for(j=0;j<n-1-i;j++){
                if(data[j]>data[j+1]){
                    int tmp=data[j];
                    data[j]=data[j+1];
                    data[j+1]=tmp;
                }
            }
        }
        for(i=0;i<n-1;i++){
            if(data[i]!=i+1){
                printf("Not jolly\n");
                break;
            }
        }
        if(i>=n-1){
            printf("Jolly\n");
        }
    }
}

