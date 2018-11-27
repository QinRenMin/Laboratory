#include<stdio.h>
int main() {
    int n,m,i,j,k;
    printf("请输入第一个数组的长度:");
    scanf("%d",&n);
    int a[n];
    printf("\n输入第一组数据:\n");
    for(i = 0; i < n; i++ ) {
        scanf("%d",&a[i]);
    }

    printf("请输入第二个数组的长度:");
    scanf("%d",&m);
    int b[m];
    printf("\n输入第二组数据:\n");
    for(i = 0; i < m; i++ ) {
           scanf("%d",&b[i]);
        }

    int result [m+n];
    i = 0; j = 0; k = 0;
    while(i < n && j < m){
        if(a[i] <= b[j]) {
            result[k++] = a[i++];
        }else {
            result[k++] = b[j++];
        }
    }
    while(i < n) result[k++] = a[i++];
    while(j < m) result[k++] = b[j++];

    for(i = 0; i< n+m; i++) {
        printf("%d ",result[i]);
    }
    printf("\n");
}