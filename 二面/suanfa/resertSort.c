/*
逆序输出数组，采用递归方式
*/
#include<stdio.h>
void outPut(int i) {
    if(i == 5) {
        printf("%d ",i);
        return;
    }
    outPut(i+1);
    printf("%d ", i);
}
int main() {
    outPut(1);
    printf("\n");
}