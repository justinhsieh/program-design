#include<stdio.h>

int main(){
    int a,b,tmp;
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("%d %d ",a,b);
        if(a>b){
            tmp=a;
            a=b;
            b=tmp;
        }
        int i,j,cnt,max=0;
        for(i=a;i<=b;i++){
            tmp=i,cnt=1;
            while(tmp>1){
                if(tmp%2==1){
                    tmp=tmp*3+1;
                }
                else{
                    tmp/=2;
                }
                cnt++;
            }
            if(cnt>max){
                max=cnt;
            }
        }
            printf("%d\n",max);
    }

    return 0;
}
