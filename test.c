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


////不带头结点的单链表
//缺点:不能单独存放数据 尾删 任意地方插入 任意地方删除 时间复杂度都是O(n)
//因为需要从头开始找要修改结点的前一个结点
//void SListNodeTest1() 
//{
//	SListNode* plist = NULL;
//	SListPushBack(&plist, 1);//测试尾插
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	SListPushFront(&plist, 0);
//	SListPrint(plist);//传入头结点的值
//
//	SListPopFront(&plist);//测试头删
//	SListPopFront(&plist);
//	SListPopFront(&plist);
//	SListPrint(plist);
//	SListPopFront(&plist);
//	SListPopFront(&plist);
//	SListPrint(plist);
//
//	SListPopBack(&plist);//测试尾删
//	SListPopBack(&plist);
//	SListPopBack(&plist);
//	SListPopBack(&plist);
//	SListPopBack(&plist);
//	SListPrint(plist);
//}
//void SListNodeTest2() 
//{
//	SListNode* plist = NULL;//存头节点的地址 现在链表里什么都没有 放NULL就行了
//	SListPushBack(&plist, 1);//测试尾插
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	//想在3的前面插入一个10 要先找到3
//	SListNode* pos = SListFind(plist, 3);
//	//1前面插10
//	//SListNode* pos = SListFind(plist, 1);
//	if (pos) 
//	{
//		SListInsert(&plist, pos, 10);
//	}
//	SListPrint(plist);
//}
//
//void SListNodeTest3()
//{
//	SListNode* plist = NULL;//存头节点的地址 现在链表里什么都没有 放NULL就行了
//	SListPushBack(&plist, 1);//测试尾插
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	//删除 pos位置的值
//	SListNode* pos = SListFind(plist, 3);
//	if (pos)
//	{
//		SListErase(&plist, pos);
//	}
//	SListPrint(plist);
//
//	pos = SListFind(plist, 1);
//	if (pos)
//	{
//		SListErase(&plist, pos);
//	}
//	SListPrint(plist);
//}
//int main()
//{
//	SListNodeTest3();
//}


//带头结点的双向循环链表 带头结点是带哨兵位的头结点，这个结点不存储有效数据
//双向链表有俩个指针 后继(指向下一个指针) 前驱(指向后一个的指针) 
//带头结点不需要改变传过来的指针，也意味着不需要传二级指针了

//void TestList1() 
//{
//	ListNode* plist = ListInit();
//	//ListNode* plist = ListInit(plist);//(报错)不能这样写  error C4700:使用了未初始化的局部变量“plist” 因为后面的参数在plist未初始化完毕就把plist作为参数传进去了
//	ListPushBack(plist, 1);
//	ListPushBack(plist, 2);
//	ListPushBack(plist, 3);
//	ListPushBack(plist, 4);
//	ListPushFront(plist, 0);
//	ListPopFront(plist, 0);//后面的数无论是几，都只进行头删
//	ListPopBack(plist , 4);
//	ListPrint(plist);
//	ListDestory(plist);
//}
//void TestList2()
//{
//	ListNode* plist = ListInit();
//	ListPushBack(plist, 1);
//	ListPushBack(plist, 2);
//	ListPushBack(plist, 3);
//	ListPushBack(plist, 4);
//	ListPrint(plist);
//
//	ListNode* pos = ListFind(plist, 3);//查找第4个结点
//	if (pos) 
//	{
//		//查找，附带着修改的作用
//		pos->data *= 10;
//		printf("找到了,并且结点的值乘以10\n");
//	}
//	else 
//	{
//		printf("未找到\n");
//	}
//	ListPrint(plist);
//	ListInsert(pos, 300);
//	ListPrint(plist);
//	ListErase(pos);
//	ListPrint(plist);
//	int ret= ListEmpty(plist);
//	printf("%d\n", ret);//1 链表不为空
//	int size = ListSize(plist);
//	printf("%d\n", size);
//}
//int main() 
//{
//	TestList2();
//	return 0;
//}