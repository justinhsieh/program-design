#include<stdio.h>
#include<string.h>

int main(){
    char input[1001];
    int cnt=1;
    while(gets(input)!=NULL){
        int i;
        for(i=0;i<strlen(input);i++){
            if(input[i]=='"'){
                if(cnt==1){
                    printf("``");
                    cnt++;
                }
                else{
                    printf("''");
                    cnt=1;
                }
            }
            else{
                printf("%c",input[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

