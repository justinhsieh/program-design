#include<stdio.h>
#include<string.h>

int main(){
    char a[1001];
    while(gets(a)!=NULL){
        int i,max=0,ans[128]={0};
        for(i=0;i<strlen(a);i++){
            if(a[i]>=(char)32 && a[i]<=(char)127){
                ans[a[i]]++;
            }
        }
        for(i=32;i<=127;i++){
            if(ans[i]>max){
                max=ans[i];
            }
        }
        for(i=1;i<=max;i++){
            for(int j=127;j>=32;j--){
                if(ans[j]==i){
                    printf("%d %d\n",j,i);
                }
            }
        }
    }
    return 0;
}
