#include<stdio.h>
#include<stdlib.h>

 void main() {
    int a,b,i;
    a = 0;
    b = 0;
    int count1 = 0;
    int count2 = 0;
    for(i = 1; i <=100; i++ ){
        a = rand()%6+1;
        b = rand()%6+1;
        printf("%d %d\n",a,b);
        if(a > b){
            count1++;
        }else if(a < b){
            count2++;
        }
    }
    if(count1 > count2){
        printf("a win\n");
    }else if(count1 < count2){
    printf("b win\n");
    }else{
        printf("no winner\n");
    }
}