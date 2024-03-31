#include<stdio.h>
#define SIZE 8

void mergesort(int *,int*,int,int);
int main(){
    int array[SIZE]={5,3,8,6,2,7,1,4};                              
    int reg[SIZE]={0}; //register                                            
    mergesort(array,reg,0,SIZE-1);                                     
    for(int i=0;i<8;i++){                                                     
        printf("%d ",array[i]);                                              
    }                                                                                
    return 0;                                                                        
}
void mergesort(int *array,int *reg,int front ,int end){
    int mid=(front+end)/2;
    if( front < end ){
        //SEPERATE INTO TWO PARTS
        
        mergesort(array,reg,front,mid);
        mergesort(array,reg,mid+1,end);
        
        int leftpoint=front , rightpoint=mid+1;
        int i;
        
        for(i=front;i<=end;i++){
            //LEFT LIMIT
            if(leftpoint==mid+1){
                reg[i]=array[rightpoint];
                rightpoint++;
            }
            //RIGHT LIMIT
            else if(rightpoint>end){
                reg[i]=array[leftpoint];
                leftpoint++;
            }
            //COMPARE TWO PARTS
            else if(array[leftpoint] < array[rightpoint]){
                reg[i]=array[leftpoint];
                leftpoint++;
            }
            else{
                reg[i]=array[rightpoint];
                rightpoint++;
            }
        }
        //SAVE REG INTO ARRAY
        for(i=front;i<=end;i++){
            array[i]=reg[i];
        }
    }
}

