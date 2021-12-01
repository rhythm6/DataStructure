#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
//��ʼ�� 
//top��0 ָ����ջ��Ԫ�ص���һ��
//top��-1 ָ�����ջ��Ԫ��
void StackInit(ST* ps) 
{
	assert(ps);
	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);//����4�� STDataType(int��)���ռ�Ĵ�С
	ps->capacity = 4;
	ps->top = 0;

}
//���� 
void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}
//ѹջ  ����Ԫ�ز嵽ջ����(����) 
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	//�������
	if (ps->top == ps->capacity)//��д��=  ...
	{
		 STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		//�����ps->capacity ����4û���κ�������˼
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
//��ջ  ��ջ��Ԫ��ɾ���� ʹ�������Ԫ�س�Ϊ�µ�ջ��Ԫ�� 
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
//����ջ��С 
int StackSize(ST* ps) 
{
	assert(ps);
	return ps->top;
}
//�ж�ջ�� 
bool StackEmpty(ST* ps) 
{
	assert(ps);
	return ps->top == 0;
}
