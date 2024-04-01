#include<stdio.h>
#include<math.h>

int main(){
    int n,s,d,a,b;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&s,&d);
        a=(s+d)/2 ;
        b=s-a;
        if((s+d)%2!=0 || s<d){
            printf("impossible\n");
        }
        else{
            printf("%d %d\n",a,b);
        }
    }
}

