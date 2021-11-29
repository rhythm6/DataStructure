#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"
int main()
{
	ST st;//初始化结构体成员
	StackInit(&st);//传递st的地址才能改变st 

	StackDestory(&st);//用完销毁 
	return 0;
}
