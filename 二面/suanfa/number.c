
/*
1,2,3,4
输出数字不相同且不重复的３位数
*/

#include<stdio.h>
int main(){
    int i,j,k;
    int count = 0;
    for(i = 1; i < 5; i++) {
        for(j = 1; j < 5; j++) {
            for(k = 1; k < 5; k++)
            {
                if(i!=j&&j!=k&&i!=k){
                    count++;
                    printf("%d%d%d ",i,j,k);
                    if(count%6==0){
                    printf("\n");
                    }
                }
            }
        }
    }
    printf("count : %d\n",count);
}