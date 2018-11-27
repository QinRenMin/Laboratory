/*
数组转置
*/
#include<stdio.h>
int main() {
    int a[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{0,0,0,0}};
    int temp;
    int i, j;

    for(i = 0; i < 3; i++) {
        for(j = i+1; j < 4; j++) {
            temp = a[i][j] ;
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for( i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}