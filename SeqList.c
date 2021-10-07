#define _CRT_SECURE_NO_WARNINGS 1
//比特航哥的数据结构课
#include"SeqList.h"
//SeqList的实现
void SeqListInit(SL* ps) 
{
	/*s.size = 0;
	s.a = NULL;
	s.capacity = 0;*/

	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);//开辟了四个空间 可以存放四个元素 也就是capacity的值为4
	if (ps->a == NULL)//结构体指针 访问结构体用->
	{
		printf("申请内存失败\n");
		exit(-1);//直接结束掉程序
	}
	ps->size = 0;
	ps->capacity = 4;
}

void SeqListPrint(SL* ps) 
{
	int i = 0;
	assert(ps);
	for ( i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListPushBack(struct SeqList* ps, SLDataType x) 
{
	assert(ps);//ps一定不能为空 为空直接让它报错

	//如果满了需要增容  一般增加到原来的二倍 增的少 增加频繁 增的多 浪费空间
	if(ps->size >= ps->capacity)//如果数组个数大于等于数组容量 说明数组满了
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);//realloc 参数1 原来的空间 参数2 你要的新空间
		if (ps->a == NULL)//如果数组为空
		{
			printf("扩容失败\n");
			exit(-1);//z直接干掉程序 这句话太粗暴 就像生病了直接抢救都不抢救直接埋了
		}
	}

	//如果后面有足够的空间 原地增容，若后面没有足够的空间 找一块新的空间把数据拷过去，再释放掉就得空间
	ps->a[ps->size] = x;//通过结构体指针访问数组a, ps->size这个位置的元素 插入这个位置的值为x
	ps->size++;//加一个长度
}//尾部插入
void SeqListPopBack(struct SeqList* ps, int x);//尾部删除
void SeqListPushFront(struct SeqList* ps, SLDataType x);//头上的插入
void SeqListPopFront(struct SeqList* ps);//头上的删除

//中间位置插入和删除
void seqListInsert(struct SeqList* ps, int pos, SLDataType x);//结构体 插入的位置 插入的数据
void seqListErase(struct SeqList* ps, int pos);//结构体 删除的位置

