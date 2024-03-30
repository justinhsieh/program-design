#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp(const void*a,const void*b){
    return strcmp((char*)a,(char*)b);
}
int main(){
    char a[2000][76],tmp[76];
    int i,n,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
        gets(tmp);
    }
    qsort(a,n,76,cmp);
    int k=0;
    for(i=0;i<n;i++){
        if(strcmp(a[i],a[k])!=0){
            printf("%s %d\n",a[k],i-k);
            k=i;
        }
    }
    printf("%s %d",a[k],i-k);
    k=i;
    return 0;
}
