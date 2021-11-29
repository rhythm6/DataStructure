#define _CRT_SECURE_NO_WARNINGS 1
#pragma
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int STDataType;
//静态的东西 缺陷太大一般不建议写 
typedef struct Stack
{
	STDataType* a;//数组实现  
	int top;//栈顶 
	int capacity;//容量 
}ST;
//把顺序表的表尾当作栈顶 
//初始化 
void StackInit(ST* ps);
//销毁 
void StackDestory(ST* ps);
//压栈  把新元素插到栈顶的(上面) 
void StackPush(ST* ps, STDataType x);
//出栈  把栈顶元素删除掉 使其下面的元素成为新的栈顶元素 
void StackPop(ST* ps);
//计算栈大小 
void StackSize(STps);
//判断栈空 
bool StackEmpty(STps);
