#include<stdio.h>
#include<math.h>

int main(){
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        printf("%lld\n",labs(a-b));
    }
    return 0;
}
