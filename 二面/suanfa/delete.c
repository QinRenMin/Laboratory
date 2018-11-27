#include<stdio.h>
int main(){

    char a[10];
    printf("input:");
    scanf("%s",a);
    int head = 0,tail = 0,len = 0;
    int i ,j;
    //获得到字符串的长度
    for(i = 0; a[i]!='\0'; i++) {
        len++;
    }

    //计算头部*数量
    for(i = 0;a[i] =='*'; i++) {
        head++;
    }
    //计算尾部*数量
    for(i = len-1; a[i] == '*' ;i--) {
        tail++;
    }
    int n = len - tail;
    for(i = head+1; a[i]!='\0'&&i < n;i++) {
        if(a[i]!='*'&&a[i+1] == '*'){
            for(j = i+1; a[j]!='\0'; j++)  {
                a[j] = a[j+1];
            }
         i-=1;
         len--;
         a[len] = '\0';
        }
    }

    for(i=len;i< len-tail;i++) {
        a[i] = '*';
    }
   printf("%s\n",a);
}