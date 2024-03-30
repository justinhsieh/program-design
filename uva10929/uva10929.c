#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp(const void*a,const void*b){
    return strcmp((char*)a,(char*)b);
}
int main(){
    char a[2000][76],tmp[76];
    int n,cnt=0;
    scanf("%d\n",&n);
    while(n--){
        scanf("%s\n",a[cnt++]);
        gets(tmp);
    }
    qsort(a,cnt,76,cmp);
    int i,k=0;
    for(i=0;i<cnt;i++){
        if(strcmp(a[i],a[k])!=0){
            printf("%s %d\n",a[k],i-k);
            k=i;
        }
    }
    printf("%s %d",a[k],i-k);
    k=i;
    return 0;
}
