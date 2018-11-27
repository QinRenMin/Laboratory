///*
//five people get some fish
//A   -> five   drop one fish   bring one
//B   -> five   drop one fish   bring one
//C D E..
//at least fish?A B C D E get ?
//*/
//
//#include<stdio.h>
//int main() {
//    int i ,fish[6];
//    fish[5] = 6;
//    while(1){
//        for(i = 4; i > 0; i--){
//            if(fish[i+1]%4!=0)
//                break;
//        fish[i] = fish[i+1]/4*5+1;
//        if(fish[i]%5!=0) {
//            break;
//        }
//        if(i==0){
//            break;
//        }
//        fish[5]+=5;
//        }
//    }
//    for(i = 1; i <= 5; i++ ){
//        printf("%d ",fish[i]);
//    }
//}

#include <stdio.h>
#include <stdlib.h>
int fish(int n, int x);

int main(int argc, char *argv[]) {
    int i=0, flag = 0, x;
    do{
        i=i+1;
        x=i*5+1;
        if(fish(5,x))//递归判断
        {
            flag = 1;
//flag标识
            printf("五个人合伙捕到的鱼总数是%d\n", x);
        }
    }while(!flag);
    return 0;
}

int fish(int n, int x)//n表示人数，x表示醒来后剩下的鱼
{
    if(x%5==1)
    {
        if(n==1)
            return 1;
        else
            return fish(n-1, (x-1)/5*4);
    }
    return 0;

}//这里递归的作用是作为判断条件