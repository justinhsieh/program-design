#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a==0 && b==0){
            break;
        }
        int cnt=0;
        for(int i=a;i<=b;i++){
            int tmp=(int)sqrt(i);
            if(tmp*tmp==i){
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}

