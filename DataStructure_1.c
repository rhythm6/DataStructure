#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>
//时间复杂度计算
//void Loveyou(int n)//n为问题规模
//{
//	int i = 1;//1次
//	while (i < n) //301次
//	{
//		i++;//300次
//		printf("执行次数%d",i);//执行300次
//	}
//	printf("LOL%d\n", n);//1次
//}
//int main() 
//{
//	Loveyou(300);//问题规模300次
//	return 0;
//}
//T(300) = 1+301+2*300+1 = 903 
//而问题规模n 300次 所以T(n) = 3n+3	用O表示T(n) = O(n)	
//结论1:顺序执行的代码只会影响常数项可以忽略。
//结论2:只需跳循环中的一个基本操作分析它的执行次数与n的关系即可
//结论3:如果有多层嵌套循环,只需关注最深层循环循环次数 就是嵌套最多的那一层

//void LoveYou(int n) 
//{
//	int i = 1;
//	while (i <= n) 
//	{
//		i = i * 2;
//		printf("I= %d次\n",i);//i=x^n 所以n = log2n,T(n) = O(log2n)
//	}
//	printf("N= %d次",n);
//}
//int main() 
//{
//	LoveYou(5);//问题规模300次
//	return 0;
//}

//给各个数据元素分配连续的存储空间,大小为MaxSize*sizeof(ElempType)


//顺序表的实现--动态分配
//#define InitSize 10
//typedef struct  //typedef的作用是重命名
//{
//	int* data;//指示动态分配数组的指针
//	int MaxSize;//顺序表的最大容  量
//	int length; //顺序表的当前长度
//}SeqList; //这才是结构体的名字
//void InitList(SeqList* L)
//{
//	//用malloc 函数申请一片连续的存储空间
//	L->data = (int*)malloc(InitSize * sizeof(int));//malloc 申请了10个指向int类型长度的空间,强制转换为int*型 这个值在给L->data
//	L->length = 0;//初始化顺序表
//	L->MaxSize = InitSize;//与第60行相同 10 初始化顺序表容量
//}
//
////增加动态数组的长度
//void IncreaseSize(SeqList* L, int len) //len是增加的长度
//{
//	int* p = L -> data;//定义指针
//	L->data = (int* )malloc(( L-> MaxSize+len)* sizeof(int));//将传的len参数5和ManSize10加起来在给L->data
//	int i = 0;
//	for (i = 0; i < L->length; i++) //将新空间 通过数组换个位置存放
//	{
//		L->data[i] = p[i];//顺序表的元素是连着放的 所以连着换位置没毛病
//	}
//	L->MaxSize = L->MaxSize + len;//更改顺序表最大容量
//	free(p);//释放内存空间
//}
//int main()   
//{
//	SeqList L;
//	InitList(&L);
//	IncreaseSize(&L, 5);
//	return 0;
//}


//oj题用的链表
struct ListNode 
{
	int val;
	struct ListNode* next;
};
//oj题 反转链表
//反转链表 方法一:指针反转
//struct ListNode* reverseList(struct ListNode* head) 
//{
//	struct ListNode* n1, *n2 = head , *n3 = n2->next ;
//	while (n2) 
//	{
//		n2->next = n1;//n1和n2用来翻转俩个结点之间的指针
//		n1 = n2;//翻转后全都往后走
//		n2 = n3;
//		if (n3)//判断n3是否为空
//		{
//			n3 = n3->next;//不为空也往后走 若为空，n2也为空 下一次循环不会执行了 指针翻转完毕
//		}
//	}
// return n1;
//}

//反转链表 方法二:头插法(是在头结点前面插入)
//struct ListNode* reverseList(struct ListNode* head)
//{
//	struct ListNode* cur = head;//原链表的头结点
//	struct ListNode* newhead = NULL;//新链表的头结点
//
//	while (cur)
//	{
//		struct ListNode* next = cur->next;//存放原链表下个结点的值
//		cur->next = newhead;//让新插入的结点指向前一个插入的结点
//		newhead = cur;//新链表进行头插 
//		cur = next;//cur往前走一个结点
//	}
//	return newhead;
//}
//查找链表中间结点 偶数个结点的链表返回中间的俩个结点中的第二个结点 
//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* slow = head, *fast = head;//定义快慢指针 快的是慢的指针步长的二倍
//	while (fast && fast->next)//循环想的是结束的条件 填的是继续的条件
//	{
// 
//		slow = slow->next;//走一步
//		fast = fast->next->next;//走两步
//		//雀氏妙
//	}
//	return slow;
//}

//将俩个升序链表合并为一个新的升序链表
//l1 l2 是这俩条链 tail是新链表的尾结点 head是新链表的头结点(head不变) 
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
//{
//	if (l1 == NULL)
//		return l2;
//	if (l2 == NULL)
//		return l1;
//	struct ListNode* head = NULL, * tail = NULL;
//	while (l1 !=NULL && l2!=NULL) 
//	{
//		if (l1->val < l2->val) 
//		{
//			if (tail == NULL)
//			{
//				head = tail = l1;//直接把l1拿下来尾插
//			}
//			else 
//			{
//				tail->next = l1;
//				tail = tail->next;//让tail始终保持为尾结点
//			}
//			l1 = l1->next;//
//		}
//		else 
//		{
//			if (tail == NULL) 
//			{
//				head = tail = l2;//把l2拿下来尾插
//			}
//			else 
//			{
//				tail->next = l2;
//				tail = tail->next;
//			}
//			l2 = l2->next;
//		}
//	}
//	if (l1)
//		tail ->next = l1;
//	if (l2)
//		tail -> next = l2;
//
//}
//代码改进1
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
//{
//	if (l1 == NULL)
//		return l2;
//	if (l2 == NULL)
//		return l1;
//
//	struct ListNode* head = NULL, * tail = NULL;
//	//提前取一个头结点下来
//	if (l1->val < l2->val)
//	{
//		head = tail = l1;
//		l1 = l1->next;
//	}
//	else 
//	{
//		head = tail = l2;
//		l2 = l2->next;
//	}
//	while (l1 !=NULL && l2!=NULL) 
//	{
//		if (l1->val < l2->val) 
//		{
//
//			tail->next = l1;
//			l1 = l1->next;//从第二个结点开始判断和尾插
//		}
//		else 
//		{
//			tail->next = l2;
//			l2 = l2->next;
//		}
//		tail = tail->next;//让tail始终保持为尾结点
//	}
//	if (l1)
//		tail - >next = l1;
//	if (l2)
//		tail -> next = l2;
//
//}
//第三种方法 设置哨兵位
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
//{
//	if (l1 == NULL)
//		return l2;
//	if (l2 == NULL)
//		return l1;
//
//	struct ListNode* head = NULL, * tail = NULL;
////设置哨兵位
//	head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
//	while (l1 != NULL && l2 != NULL)
//	{
//		if (l1->val < l2->val)
//		{
//
//			tail->next = l1;
//			l1 = l1->next;
//		}
//		else
//		{
//			tail->next = l2;
//			l2 = l2->next;
//		}
//		tail = tail->next;//让tail始终保持为尾结点
//	}
//	if (l1)
//		tail -> next = l1;
//	if (l2)
//		tail -> next = l2;
//	struct ListNode* first = head->next;//返回的是真正的头结点 不是哨兵位！
//	free(head);
//	return first;
//}

//链表的环就是尾结点指向任意结点形成的环 其中指向头结点的环 叫做循环链表 
//这种有环的链表快慢指针是走不完的 会在那个环上一直转
//判断链表是否有环
//bool hasCycle(struct ListNode* head)
//{
//	struct ListNode* slow = head, * fast = head;//定义快慢指针来解决
//	while(fast )//如果快指针不为空(没走完) 且不和慢指针相同 就继续走
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//		if (slow == fast)
//			return true;//有环就停下
//	}
//	//fast走完了说明没有环
//	return false;
//}
//面试问题:
//请证明fast和slow一定会相遇吗？有可能永远追不上吗？在fast走俩步 slow走一步的情况下一定能追上
//2.slow一次走一步，fast走3步行不行 //有可能追不上
//3.slow一次走一步,fast走4步行不行  //也有可能追不上
//证明:若fast走两步 slow走一步 假设环长为N 那么快慢指针之间距离为N-1 这俩指针每走一次 他们之间的距离-1 最后距离为0 快慢指针相遇
//若fast走三步 slow走一步 这俩指针每走一次 他们之间的距离-2 此时若N-1为偶数 就快指针就追的上慢指针 若N-1为奇数 他俩最近的时候距离为-1 也就是快指针反超了 永远也追不上