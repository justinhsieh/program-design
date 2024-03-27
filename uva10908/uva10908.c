#include<stdio.h>

int square(char (*m)[101] ,int ,int ,int ,int );
int main(){
    int i,j,n,a,b,c,x,y;
    char m[100][101];
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d",&a,&b,&c);
        for(i=0;i<a;i++){
            scanf("%s",m[i]);
        }
        printf("%d %d %d\n",a,b,c);
        while(c--){
            scanf("%d%d",&x,&y);
            printf("%d\n",square(m,a,b,x,y));
        }
    }
    return 0;
}
int square(char (*m)[101],int a,int b,int x,int y){
    int r=1,top,bottom,right,left;
    char ch=m[x][y];
    while(1){
        top=x-r , bottom=x+r , right=y+r , left=y-r;
        if(top<0 || bottom>=a || right>=b || left<0){
            return 2*r-1;
        }
        else{
            for(int i=top;i<=bottom;i++){
                for(int j=left;j<=right;j++){
                    if(m[i][j]!=ch){
                        return 2*r-1;
                    }
                }
            }
        }
        r++;
    }
}
