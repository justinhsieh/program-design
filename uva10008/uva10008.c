#include<stdio.h>
#include<string.h>

int main(){
    char key[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    char input[1001];
    while(gets(input)!=NULL){
        int i,j;
        for(i=0;i<strlen(input);i++){
            if(input[i]==' ' || input[i]=='\n'){
                printf("%c",input[i]);
            }
            else{
                for(j=0;j<strlen(key);j++){
                    if(input[i]==key[j]){
                        printf("%c",key[j-2]);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}

