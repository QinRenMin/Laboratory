/*
逆序输出数组，采用递归方式
*/
#include<stdio.h>
void outPut(int n) {
    printf("%d ",n);
}
int main() {
    int a[5] = {1,2,3,4,5} ;
    int i = 4;
    while(i>-1) {
        outPut(a[i]);
        i--;
    }
}