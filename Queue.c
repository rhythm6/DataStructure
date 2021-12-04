#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"
//初始化
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}
//销毁
void QueueDestory(Queue* pq) 
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq ->head = pq->tail = NULL;
}
//队尾入
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	//如果一个结点也没有
	if (pq->head == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else 
	{
		pq->tail->next = newnode;//在尾部链上新的结点
		pq->tail = newnode;//再让新的结点称为尾结点
	}
}
//队头出
void QueuePop(Queue* pq)
{ 
	assert(pq);
	assert(pq->head && pq->tail);
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QNode* next = pq->head->next;//先保存下一个结点
		free(pq->head);//释放头结点
		pq->head = next;
	}

}
//取队头元素
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->head->data;
}
//取队尾元素
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->tail->data;
}
int QueueSize(Queue* pq) 
{
	assert(pq);
	int size = 0;
	QNode* cur = pq->head;
	while (cur)//利用尾结点指向的元素为空计算链表大小
	{
		++size;
		cur = cur->next;
	}
	return size;
}
//判空
bool QueueEmpty(Queue* pq) 
{
	assert(pq);
	return pq->head == NULL;
}