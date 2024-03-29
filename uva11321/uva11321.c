#include<stdio.h>
#include<stdlib.h>

int C;
int cmp(const void *a,const void *b){
    int A=*(int*)a,B=*(int*)b;
    if(A%C==B%C){
        if(A%2==0 && B%2==0 && A>B) return 1;
        if(A%2==1 && B%2==1 && A<B) return 1;
        if(A%2==0 && B%2==1) return 1;
        if(A%2==1 && B%2==0) return -1;
    }
    else return (A%C)-(B%C);
}
int main(){
    int i,a;
    while(scanf("%d %d",&a,&C)!=EOF){
        printf("%d %d\n",a,C);
        if(a==0 && C==0){
            break;
        }
        int data[a];
        for(i=0;i<a;i++){
            scanf("%d",&data[i]);
        }
        qsort(data,a,sizeof(int),cmp);
        for(i=0;i<a;i++){
            printf("%d\n",data[i]);
        }
    }
    return 0;
}
