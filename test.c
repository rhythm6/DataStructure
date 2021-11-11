#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//数据结构的测试
//最好写一个接口测试一个接口 如果一起测,错误了不知道哪个借口有错误！！！

//顺序表
//测试头尾插入删除
//void TestSeqList1() 
//{
//	//尾部插入测试
//	SeqList s;
//	SeqListInit(&s);
//	SeqListPushBack(&s, 1);
//	SeqListPushBack(&s, 2);
//	SeqListPushBack(&s, 3);
//	SeqListPushBack(&s, 4);
//	SeqListPushBack(&s, 5);//从这里开始已经发生越界了
//	SeqListPushBack(&s, 6);//越界就像查酒驾 必须在那个点被逮住了 才会报错 也就是说越界编辑器可能不报错
//	SeqListPushBack(&s, 7);//最后size为7 capacity为4 你4个空间现在有7个元素 
//	SeqListPushBack(&s, 8);//扩容过了就没事了
//	SeqListPushBack(&s, 9);
//	SeqListPrint(&s);
//	
//	//尾部删除测试
//	SeqListPopBack(&s);
//	SeqListPopBack(&s);
//	SeqListPrint(&s);
//
//	//头部插入测试
//	SeqListPushFront(&s, -1);//插入-1
//	SeqListPushFront(&s, -2);
//	SeqListPushFront(&s, -3);
//
//	SeqListPrint(&s);
//	
//	//头部删除测试
//	SeqListPopFront(&s);
//	SeqListPopFront(&s);
//	SeqListPrint(&s);
//
//	//中间插入
//	SeqListInsert(&s, 4, 5);//在下标为4的地方插入 一个元素5
//	SeqListPrint(&s);
//
//	//中间删除
//	SeqListErase(&s, 5);//删除下标是五的元素 也就是第六个元素
//	SeqListPrint(&s);
//
//	
//	int pos = SeqListFind(&s, 5);//找到5这个元素的下标 赋给pos
//	if (pos != -1)
//	{
//		SeqListErase(&s, pos);//根据下标删除5这个元素
//	}
//	SeqListPrint(&s);
//	SeqListDestory(&s);
//}
//int main() 
//{
//	TestSeqList1();
//}


////链表
int main() 
{
	SListNode* pList = NULL;//存头节点的地址 现在链表里什么都没有 放NULL就行了

	SListPushBack(&pList, 1);//测试尾插
	SListPushBack(&pList, 2); 
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);

	SListPrint(pList);//传入头结点的值
}
