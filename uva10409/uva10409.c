#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int saxophone[14][10]={
    {0,1,1,0,0,0,0,0,0,0}, //a
    {0,1,0,0,0,0,0,0,0,0}, //b
    {0,1,1,1,0,0,1,1,1,1}, //c
    {0,1,1,1,0,0,1,1,1,0}, //d
    {0,1,1,1,0,0,1,1,0,0}, //e
    {0,1,1,1,0,0,1,0,0,0}, //f
    {0,1,1,1,0,0,0,0,0,0}, //g
    {1,1,1,0,0,0,0,0,0,0}, //A
    {1,1,0,0,0,0,0,0,0,0}, //B
    {0,0,1,0,0,0,0,0,0,0}, //C
    {1,1,1,1,0,0,1,1,1,0}, //D
    {1,1,1,1,0,0,1,1,0,0}, //E
    {1,1,1,1,0,0,1,0,0,0}, //F
    {1,1,1,1,0,0,0,0,0,0}, //G
    };
    int i,j,n,num;
    char input[201];
    scanf("%d\n",&n);
    while(n--){
        int ans[10]={0},finger[10]={0};
        gets(input);
        if(strlen(input)!=0){
            for(i=0;i<strlen(input);i++){
                if(islower(input[i])){
                    num=input[i]-'a';
                }
                else{
                    num=input[i]-'A'+7;
                }
                for(j=0;j<10;j++){
                    if(saxophone[num][j]!=finger[j] && saxophone[num][j]==1){
                        ans[j]++;
                    }
                    finger[j]=saxophone[num][j];
                }
            }
        }
        for(i=0;i<10;i++){
            printf("%d ",ans[i]);
        }
        printf("\n");
    }
    return 0;
}
