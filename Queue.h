#define _CRT_SECURE_NO_WARNINGS 1
#pragma
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>
typedef int QDataType;
//定义结点
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;

}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;
//初始化
void QueueInit(Queue* pq);
//销毁
void QueueDestory(Queue* pq);
//队尾入
void QueuePush(Queue* pq, QDataType x);
//队头出
void QueuePop(Queue* pq);
//返回头结点
QDataType QueueFront(Queue* pq);

QDataType QueueBack(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);