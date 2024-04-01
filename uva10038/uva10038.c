#include<stdio.h>
#include<math.h>

int main(){
    int n,i,player;
    double p;
    scanf("%d",&n);
    while(n--){
        scanf("%d %lf %d",&player,&p,&i);
        double q=1-p;
        double a=pow(q,i-1)*p;
        double r=pow(q,player);
        printf("%.4lf\n",(a/(1-r)));
    }
}

