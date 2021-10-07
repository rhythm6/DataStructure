#pragma once //防止被重复包含
#include <stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
//整个数据结构的声明

//顺序表,有效数组在数组中必须是连续
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
//void SeqListPushBack(SL* ps, SLDataType x);//头部插入
//void SeqListPopBack(SL* ps, int x);//尾部插入
//void SeqListPushFront(SL* ps, SLDataType x);//头上的删除
//void SeqListPopFront(SL* ps);//尾部删除


//动态顺序表设计 (大小可变)
typedef int SLDataType;//这样做的好处可以随时更改顺序表的数据类型
//这里的SLDataType就是类型名 直接用的时候 用它就行

//vector
typedef struct SeqList
{
	SLDataType* a;//顺序表的表长 指向动态开辟的数组
	int size;//有效数据的个数 同时也是最后一个元素的下标
	int capacity;//容量
}SL,SeqList;
void SeqListInit(SL* ps);
void SeqListPrint(SL* ps);//打印插入的值

void SeqListPushBack(SL* ps, SLDataType x);//尾部插入
void SeqListPopBack(SL* ps, int x);//尾部删除
void SeqListPushFront(SL* ps, SLDataType x);//头上的插入
void SeqListPopFront(SL* ps);//头上的删除

//中间位置插入和删除
void seqListInsert(SL* ps, int pos, SLDataType x);//结构体 插入的位置 插入的数据
void seqListErase(SL* ps, int pos);//结构体 删除的位置
