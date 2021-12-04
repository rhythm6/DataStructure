#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"
//��ʼ��
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}
//����
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
//��β��
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
	//���һ�����Ҳû��
	if (pq->head == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else 
	{
		pq->tail->next = newnode;//��β�������µĽ��
		pq->tail = newnode;//�����µĽ���Ϊβ���
	}
}
//��ͷ��
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
		QNode* next = pq->head->next;//�ȱ�����һ�����
		free(pq->head);//�ͷ�ͷ���
		pq->head = next;
	}

}
//ȡ��ͷԪ��
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->head->data;
}
//ȡ��βԪ��
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
	while (cur)//����β���ָ���Ԫ��Ϊ�ռ��������С
	{
		++size;
		cur = cur->next;
	}
	return size;
}
//�п�
bool QueueEmpty(Queue* pq) 
{
	assert(pq);
	return pq->head == NULL;
}