#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int i,day,num,cnt=0;
        scanf("%d%d",&day,&num);
        int hartal[num];
        for(i=0;i<num;i++){
            scanf("%d",&hartal[i]);
        }
        for(i=1;i<=day;i++){
            if(i%7==6 || i%7==0){
                continue;
            }
            for(int j=0;j<num;j++){
                if(i%hartal[j]==0){
                    cnt++;
                    break;
                }
            }
        }
        printf("%d\n",cnt);
    }
}

