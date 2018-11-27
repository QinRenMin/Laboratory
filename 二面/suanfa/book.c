#include<stdio.h>
int main(){
    int a,b,c;
    int i = 5;
    int count = 0;
    for(a = 1; a <= i; a++){
        for(b = 1; b <= i; b++){
            for(c = 1; c <= i; c++ ){
                if(a!=b && a!=c && b!=c){
                    count++;
                    printf("A:%d B:%d C:%d  ",a,b,c);
                    if(count%3==0){
                    printf("\n");
                    }
                }
            }
        }
    }
    printf("count : %d\n",count);
}