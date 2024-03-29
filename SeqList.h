#pragma once //防止被重复包含
#include <stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>
//整个数据结构的声明

//顺序表,有效数组在数组中必须是连续
// 顺序表的缺点 容易浪费空间 头插头删慢 时间复杂度O(n) 代价在挪动数据上 可以用链表来解决
//静态顺序表设计 (固定大小)
//typedef int SLDataType;//这样做的好处可以随时更改顺序表的数据类型
//#define N 10 //更改顺序表长度
//
//SL
//{
//	SLDataType a[N];//顺序表的表长
//	int size;
//};
//
//void SeqListPushBack(SL* ps, SLDataType x);//尾部插入
//void SeqListPopBack(SL* ps);//尾部删除
//void SeqListPushFront(SL* ps, SLDataType x);//头上的删除
//void SeqListPopFront(SL* ps);//头上删除


////动态顺序表设计 (大小可变)
//typedef int SLDataType;//这样做的好处可以随时更改顺序表的数据类型
////这里的SLDataType就是类型名 直接用的时候 用它就行
//
////vector
//typedef struct SeqList
//{
//	SLDataType* a;//顺序表的表长 指向动态开辟的数组
//	int size;//有效数据的个数 同时也是最后一个元素的下标
//	int capacity;//容量
//}SL,SeqList;
//void SeqListInit(SL* ps);
//void SeqListDestory(SL* ps);
//void SeqListPrint(SL* ps);//打印插入的值
//void SeqListCheckCapacity(SL *ps);//检查容量
//void SeqListPushBack(SL* ps, SLDataType x);//尾部插入
//void SeqListPopBack(SL* ps);//尾部删除
//void SeqListPushFront(SL* ps, SLDataType x);//头上的插入
//void SeqListPopFront(SL* ps);//头上的删除
//
////中间位置插入和删除
//void SeqListInsert(SL* ps, int pos, SLDataType x);//结构体指针 插入的位置 插入的数据
//void SeqListErase(SL* ps, int pos);//结构体指针 删除的位置
//
////顺序表查找
//int SeqListFind(SL* ps, SLDataType x);


////不单头结点的单链表
//结点(NO\ode) 节点 不同的书写的不同
//typedef int SListDataType;
//typedef struct SListNode
//{
//	SListDataType data;
//	struct SListNode* next;//结构体套结构体 这个指针指向下一个结构体 下一个结构体里面还有一个next指针 继续套娃
//}SListNode;
////可能会改变链表的头指针 传二级指针 
////不会改变链表的头指针 传一级指针 
//void SListPrint(SListNode* phead);//打印函数
//void SListPushBack(SListNode** pphead, SListDataType x);//尾插
//void SListPopBack(SListNode** phead);//尾删
//void SListPushFront(SListNode** pphead, SListDataType x);//头插
//void SListPopFront(SListNode** pphead);//头删
//SListNode* SListFind(SListNode* phead, SListDataType x);//查找
//void SListInsert(SListNode** pphead, SListNode* pos, SListDataType x);//任意位置插入
//void SListErase(SListNode** pphead,SListNode* pos);//任意位置删除 

//带头结点的双向循环链表
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;//后继
	struct ListNode* prev;//前驱 头结点的前驱就是链表的尾部
	LTDataType data;
}ListNode;

//初始化
ListNode* ListInit();
//毁灭
void ListDestory(ListNode* phead);
//尾插
void ListPushBack(ListNode* phead, LTDataType x);
//打印
void ListPrint(ListNode* phead);
//头插
void ListPushFront(ListNode* phead, LTDataType x);
//头删
void ListPopFront(ListNode* phead, LTDataType x);
//尾删
void ListPopBack(ListNode* phead, LTDataType x);
//查找
ListNode* ListFind(ListNode* phead, LTDataType x);
//pos位置之前插入x
void ListInsert(ListNode* pos, LTDataType x);
//删除pos位置的值
void ListErase(ListNode* pos);
//判断链表是否为空
bool ListEmpty(ListNode* phead);
//计算链表大小
int ListSize(ListNode* phead);