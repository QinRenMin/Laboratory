#include<stdio.h>
#include<stdlib.h>
struct S{
    char ch;
    struct S *next;
};

struct S *Create() {
    struct S *pHead = NULL; //初始化链表．头指针为空
    struct S *pEnd,*pNew;
    int count = 0;
    pEnd=pNew=(struct S *) malloc(sizeof (struct S));
    printf("请输入要输入的字符:#表示结束\n");
    scanf("%c",&pNew->ch);
    while(pNew->ch!='#') {
        count++;
        if(count ==1){
            pNew->next = pHead; //使得指针指向为空
            pEnd = pNew;          //跟踪新加入的节点
            pHead = pNew;         //头指针指向首节点
        }else{
            pNew->next = NULL; //新节点指针为空
            pEnd->next = pNew; //原来的节点指向新结点
            pEnd = pNew; //pEnd指向新节点
        }
       pNew = (struct S *) malloc(sizeof (struct S));
        scanf("%c",&pNew->ch);
    }
    free(pNew); //释放节点空间
    return pHead;
}
void print(struct S *pHead) {
    struct S *temp;
    temp = pHead;
    while(temp!=NULL) {
        printf("%c",temp->ch);
        temp = temp->next;
    }
}
int main() {
    struct S *pHead;  //定义头节点
    pHead = Create(); //创建节点
    print(pHead);     //输出链表
}