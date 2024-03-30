#include<stdio.h>

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a==0 && b==0){
            break;
        }
        int carry=0,cnt=0;
        while( a>0 || b>0){
            if( (a%10+b%10+carry) >=10 ){
                carry=1,cnt++;
            }
            a/=10,b/=10;
        }
        if(cnt==0){
            printf("No carry operation.\n");
        }
        else if(cnt==1){
             printf("%d carry operation.\n",cnt);
        }
        else{
            printf("%d carry operations.\n",cnt);
        }
    }
    return 0;
}
