#include<stdio.h>
#include<string.h>

int main(){
    char input1[1001],input2[1001];
    while(scanf("%s%s",input1,input2)!=EOF){
        int sum1[26]={0},sum2[26]={0};
        int i,j;
        for(i=0;i<strlen(input1);i++){
            sum1[input1[i]-'a']++;
        }
        for(i=0;i<strlen(input2);i++){
            sum2[input2[i]-'a']++;
        }
        for(i=0;i<26;i++){
            if(sum1[i]>0 && sum2[i]>0 ){
                if(sum1[i]>sum2[i]){
                    sum1[i]=sum2[i];
                }
                for(j=0;j<sum1[i];j++){
                    printf("%c",i+'a');
                }
            }
        }
        printf("\n");
    }
    return 0;
}

