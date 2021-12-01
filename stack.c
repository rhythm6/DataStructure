#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
//初始化 
//top给0 指向是栈顶元素的下一个
//top给-1 指向的是栈顶元素
void StackInit(ST* ps) 
{
	assert(ps);
	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);//开辟4个 STDataType(int型)个空间的大小
	ps->capacity = 4;
	ps->top = 0;

}
//销毁 
void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}
//压栈  把新元素插到栈顶的(上面) 
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	//如果满了
	if (ps->top == ps->capacity)//少写个=  ...
	{
		 STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		//这里的ps->capacity 就是4没有任何其他意思
		//4*2*STDataType
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else  
		{
			ps->a = tmp;
			ps->capacity *= 2;
		}
	}
	ps->a[ps->top] = x;
	ps->top++;
}
//出栈  把栈顶元素删除掉 使其下面的元素成为新的栈顶元素 
void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}
//计算栈大小 
int StackSize(ST* ps) 
{
	assert(ps);
	return ps->top;
}
//判断栈空 
bool StackEmpty(ST* ps) 
{
	assert(ps);
	return ps->top == 0;
}
