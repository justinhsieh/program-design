#include<stdio.h>

int GCD(int i,int j);
int main(){
    int i,j,n;
    while(scanf("%d",&n)){
        if(n==0){
            break;
        }
        int sum=0;
        for(i=1;i<n;i++){
            for(j=i+1;j<=n;j++){
                sum+=GCD(i,j);
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
int GCD(int i,int j){
    while((i%=j) && (j%=i));
    return i+j;
}
