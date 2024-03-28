#include<stdio.h>

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
int main(){
    int data[8]={16,25,39,27,12,8,45,63};
    int i,j,min,index;
    for(i=0;i<7;i++){
        index=i;
        for(j=i+1;j<8;j++){
            if(data[j]<data[index]){
                index=j;
            }
        }
        swap(&data[index],&data[i]);
    }
    for(int k=0;k<8;k++){
        printf("%d ",data[k]);
    }
    return 0;
}
