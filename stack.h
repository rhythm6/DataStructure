#define _CRT_SECURE_NO_WARNINGS 1
#pragma
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int STDataType;
//��̬�Ķ��� ȱ��̫��һ�㲻����д 
typedef struct Stack
{
	STDataType* a;//����ʵ��  
	int top;//ջ�� 
	int capacity;//���� 
}ST;
//��˳���ı�β����ջ�� 
//��ʼ�� 
void StackInit(ST* ps);
//���� 
void StackDestory(ST* ps);
//ѹջ  ����Ԫ�ز嵽ջ����(����) 
void StackPush(ST* ps, STDataType x);
//��ջ  ��ջ��Ԫ��ɾ���� ʹ�������Ԫ�س�Ϊ�µ�ջ��Ԫ�� 
void StackPop(ST* ps);
//����ջ��С 
void StackSize(STps);
//�ж�ջ�� 
bool StackEmpty(STps);
