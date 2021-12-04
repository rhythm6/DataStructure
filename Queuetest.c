#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"
void TestQueue()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	printf("%d \n", QueueFront(&q));
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);//取一个删一个
		printf("\n");
	}
	QueueDestory(&q);//用完销毁 
}
int main()
{
	TestQueue();
	return 0;
}
