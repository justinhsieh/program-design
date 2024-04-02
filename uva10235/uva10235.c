#include<stdio.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int i,tmp=n,sum=0,flag=0;
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                break;
            }
        }
        if(i*i>n){
            flag=1;
        }
        if(flag){
            while(tmp>0){
                sum=sum*10+tmp%10;
                tmp/=10;
            }
            if(sum!=n){
                for(i=2;i*i<=sum;i++){
                    if(sum%i==0){
                        break;
                    }
                }
                if(i*i>sum){
                    flag=2;
                }
            }
        }
        if(flag==0){
            printf("%d is not prime.\n",n);
        }
        else if(flag==1){
            printf("%d is prime.\n",n);
        }
        else{
            printf("%d is emirp.\n",n);
        }
    }
}

