#include<stdio.h>
#define SIZE 8

void mergesort(int *,int*,int,int);
int main(){
    int array[SIZE]={5,3,8,6,2,7,1,4};                                   //             53862714
    int reg[SIZE]={0}; //register                                            //            5386 / 2714
    mergesort(array,reg,0,SIZE-1);                                     //          53 / 86 / 27 / 14
    for(int i=0;i<8;i++){                                                         //     5 / 3 / 8 / 6 / 2 / 7 / 1 / 4
        printf("%d ",array[i]);                                                  //          35 / 68 / 27 / 14
    }                                                                                      //             3568 / 1247
    return 0;                                                                         //               12345678
}
void mergesort(int *array,int *reg,int front ,int end){
    int mid=(front+end)/2;
    if( front < end ){
        mergesort(array,reg,front,mid);
        mergesort(array,reg,mid+1,end);

        int leftpoint=front , rightpoint=mid+1;
        int i;

        for(i=front;i<=end;i++){
            if(leftpoint==mid+1){
                reg[i]=array[rightpoint];
                rightpoint++;
            }
            else if(rightpoint>end){
                reg[i]=array[leftpoint];
                leftpoint++;
            }
            else if(array[leftpoint] < array[rightpoint]){
                reg[i]=array[leftpoint];
                leftpoint++;
            }
            else{
                reg[i]=array[rightpoint];
                rightpoint++;
            }
        }
            for(i=front;i<=end;i++){
                array[i]=reg[i];
            }
    }
}

