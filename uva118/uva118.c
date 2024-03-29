#include<stdio.h>
#include<string.h>

int main(){
    int i,a,b,x,y,tmpx,tmpy,flag;
    char dir,command[101];
    int map[51][51]={0};
    scanf("%d %d",&a,&b);
    while(scanf("%d %d %c",&x,&y,&dir)!=EOF){
        scanf("%s",command);
        flag=1;
        for(i=0;i<strlen(command);i++){
            if(command[i]=='R'){
                if(dir=='N') dir='E';
                else if(dir=='E') dir='S';
                else if(dir=='S') dir='W';
                else dir='N';
            }
            else if(command[i]=='L'){
                 if(dir=='N') dir='W';
                else if(dir=='E') dir='N';
                else if(dir=='S') dir='E';
                else dir='S';
            }
            else{
                    tmpx=x , tmpy=y;
                    switch(dir){
                        case 'E':
                            x++;
                            break;
                        case 'S':
                            y--;
                            break;
                        case 'W':
                            x--;
                            break;
                        case 'N':
                            y++;
                    }
                    if(x<0 || x>a || y<0 || y>b){
                        if(map[tmpx][tmpy]==1){
                            x=tmpx,y=tmpy;
                            continue;
                        }
                        else{
                            printf("%d %d %c LOST\n",tmpx,tmpy,dir);
                            map[tmpx][tmpy]=1,flag=0;
                            break;
                        }
                    }
                }
            }
            if(flag){
                printf("%d %d %c\n",x,y,dir);
            }
        }
    return 0;
}
