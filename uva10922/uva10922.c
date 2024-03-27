#include<stdio.h>
#include<string.h>

int main(){
    char a[1001];
    while(scanf("%s",a)!=EOF){
        int i,tmp,sum=0,ans=1;
        if(strlen(a)==1 && a[0]=='0'){
            break;
        }
        for(i=0;i<strlen(a);i++){
            sum+=(a[i]-'0');
        }
        if(sum%9==0){
            while(sum>9){
                tmp=0;
                while(sum>0){
                    tmp+=(sum%10);
                    sum/=10;
                }
                sum=tmp;
                ans++;
            }
        }
       if(sum==9){
            printf("%s is a multiple of 9 and has 9-degree %d.\n",a,ans);
       }
       else{
            printf("%s is not a multiple of 9.\n",a);
       }
    }
    return 0;
}

