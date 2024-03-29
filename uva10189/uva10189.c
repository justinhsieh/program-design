#include<stdio.h>

int main(){
    int n,top,north,west,tmp;
    char dice[6];
    while(scanf("%d",&n)!=EOF){
        if(n==0){
            break;
        }
        top=1,north=2,west=3;
        while(n--){
            scanf("%s",dice);
            switch(dice[0]){
                case 'e':
                case 'E':
                    tmp=top,top=west,west=7-tmp;
                    break;
                case 's':
                case 'S':
                    tmp=top,top=north,north=7-tmp;
                    break;
                case 'w':
                case 'W':
                    tmp=top,top=7-west,west=tmp;
                    break;
                case 'n':
                case 'N':
                    tmp=top,top=7-north,north=tmp;
                    break;
            }
        }
        printf("%d\n",top);
    }
    return 0;
}
