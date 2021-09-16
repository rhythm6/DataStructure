#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//顺序表的实现---静态分配
//顺序表的表长度 刚开始确定后就无法更改(存储空间是静态的)
//#define MaxSize 10 //定义最大长度
//typedef struct
//{
//	//ElemType 元素类型 自己写代码的时候用别的
//	//ElemType data[MaxSize];
//	int data[MaxSize];//用静态的 "数组"存放数据元素
//	int length; //顺序表的当前长度
//}SqList; //Sq sequence --- 顺序,序列
//
////基本操作-初始化一个顺序表
//void InitList(SqList& L)
//{
//	for (int i = 0; i < MaxSize; i++)
//		L.data[i] = 0;
//		L.length = 0;
//}
//int main()
//{
//	SqList L;   //声明一个顺序表
//	InitList(L); //初始化顺序表
//	//访问顺序表 注:长度不能超过顺序表的值
//	for (int i = 0; i < MaxSize; i++)//
//		//若打印的
//		printf("data[%d] = %d\n", i, L.data[i]);
//	return 0;
//}


//#define InitSize 10
//typedef struct
//{
//	ElemType* data;
//	int MaxSize;
//	int length;
//} SeqList;
//
//顺序表的实现--动态分配
//key:动态申请和释放内存空间
//L.data = (ElemType*)malloc(sizeof(ElemType) * InitSize);
//C语言   mallloc(动态申请) 会申请一整片连续的存储空间 使用完之后会返回
//指向这片空间的开始地址的指针
// free(申请空间)
//maalloc函数需要强制转换为你定义的数据元素类型指针(ElemType)
//C++  new,delete 关键字


