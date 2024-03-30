#include<stdio.h>
#include<string.h>

int main(){
    char a[1001];
    while(scanf("%s",a)!=EOF){
        if(strlen(a)==1 && a[0]=='0'){
            break;
        }
        int sum1=0,sum2=0;
        for(int i=0;i<strlen(a);i++){
            if(i%2==0){
                sum1+=a[i]-'0';
            }
            else{
                sum2+=a[i]-'0';
            }
        }
        if((sum1-sum2)%11==0){
            printf("%s is a multiple of 11.\n",a);
        }
        else{
             printf("%s is not a multiple of 11.\n",a);
        }
    }
    return 0;
}
