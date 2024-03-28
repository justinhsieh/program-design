#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp(const void*a,const void*b){
    return strcmp((char*)a,(char*)b);
}
char tree[1000000][31];
int main(){
    int i,n,cnt=0;
    scanf("%d\n\n",&n);
    while(n--){
        for(i=0;i<cnt;i++){
            tree[i][0]='\0'; //每次要重置
        }
        cnt=0;
        while(gets(tree[cnt])){
            if(strlen(tree[cnt])==0){
                break;
            }
            cnt++;
        }
        qsort(tree,cnt,31,cmp);  //qsort用法
        int k=0;
        for(i=0;i<cnt;i++){
            if(strcmp(tree[i],tree[k])!=0){
                printf("%s %.4lf\n",tree[k],100.0*(i-k)/cnt);
                k=i;
            }
        }
        printf("%s %.4lf\n",tree[k],100.0*(i-k)/cnt);
        if(n>0){
            printf("\n");
        }
    }
    return 0;
}
