#include<stdio.h>
#include<string.h>

int gcd(int,int);
int main(){
    int n,ans;
    char input1[31],input2[31];
    scanf("%d",&n);
    for(int k=1;k<=n;k++){
        scanf("%s%s",input1,input2);
        int i,sum1=0,sum2=0,x=1;
        for(i=strlen(input1)-1;i>=0;i--){
            sum1+=(input1[i]-'0')*x;
            x*=2;
        }
        x=1;
        for(i=strlen(input2)-1;i>=0;i--){
            sum2+=(input2[i]-'0')*x;
            x*=2;
        }
        ans=gcd(sum1,sum2);
        if(ans>1){
            printf("Pair #%d: All you need is love!\n",k);
        }
        else{
            printf("Pair #%d: Love is not all you need!\n",k);
        }
    }
}
int gcd(int a,int b){
    while((a%=b) && (b%=a));
    return a+b;
}

