#include<stdio.h>

int main(){
    int data[8]={16,25,39,27,12,8,45,63};
    int i,j,insertion_number;
    for(i=1;i<8;i++){
	insertion_number=data[i] , j=i-1;
	while(j>=0 && insertion_number<data[j]){
            data[j+1]=data[j];
            j--;
	}
	data[j+1]=insertion_number;
    }
    for(i=0;i<8;i++){
        printf("%d ",data[i]);
    }
    return 0;
}
