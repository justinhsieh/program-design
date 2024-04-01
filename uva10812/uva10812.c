#include<stdio.h>

int main(){
    int n,i,j,m;
    long long int matrix[10000];
    scanf("%d",&n);
    for(int k=1;k<=n;k++){
        scanf("\nN = %d",&m);
        for(i=0;i<m*m;i++){
            scanf("%lld",&matrix[i]);
        }
        for(i=0;i<m*m;i++){
            if(matrix[i]!=matrix[(m*m)-1-i] || matrix[i]<0){
                break;
            }
        }
        if(i>=m*m){
            printf("Test #%d: Symmetric.\n",k);
        }
        else{
            printf("Test #%d: Non-symmetric.\n",k);
        }
    }
}

