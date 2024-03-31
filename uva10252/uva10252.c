#include<stdio.h>
#include<string.h>

int main(){
    char input[100][101];
    int cnt=0,max=0;
    while(gets(input[cnt])!=NULL){
        if(strlen(input[cnt])>max){
            max=strlen(input[cnt]);
        }
        cnt++;
    }
    int i,j;
    for(i=0;i<max;i++){
        for(j=cnt-1;j>=0;j--){
            if(i>=strlen(input[j])){
                printf(" ");
            }
            else{
                printf("%c",input[j][i]);
            }
        }
        printf("\n");
    }
    return 0;
}

