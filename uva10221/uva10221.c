#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    double s,d,PI=atan(1)*4;
    char a[4];
    while(scanf("%lf%lf%s",&s,&d,a)!=EOF){
        if(strcmp(a,"min")==0){
            d/=60;
        }
        d=fmod(d,360);
        if(d>180){
            d=360-d;
        }
        d=d*PI/180;
        double arc=(6440+s)*d;
        double chord=2*(6440+s)*sin(d/2);
        printf("%.6lf %.6lf\n",arc,chord);
    }
    return 0;
}
