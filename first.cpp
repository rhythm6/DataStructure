#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//˳����ʵ��---��̬����
//˳���ı��� �տ�ʼȷ������޷�����(�洢�ռ��Ǿ�̬��)
//#define MaxSize 10 //������󳤶�
//typedef struct
//{
//	//ElemType Ԫ������ �Լ�д�����ʱ���ñ��
//	//ElemType data[MaxSize];
//	int data[MaxSize];//�þ�̬�� "����"�������Ԫ��
//	int length; //˳���ĵ�ǰ����
//}SqList; //Sq sequence --- ˳��,����
//
////��������-��ʼ��һ��˳���
//void InitList(SqList& L)
//{
//	for (int i = 0; i < MaxSize; i++)
//		L.data[i] = 0;
//		L.length = 0;
//}
//int main()
//{
//	SqList L;   //����һ��˳���
//	InitList(L); //��ʼ��˳���
//	//����˳��� ע:���Ȳ��ܳ���˳����ֵ
//	for (int i = 0; i < MaxSize; i++)//
//		//����ӡ��
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
//˳����ʵ��--��̬����
//key:��̬������ͷ��ڴ�ռ�
//L.data = (ElemType*)malloc(sizeof(ElemType) * InitSize);
//C����   mallloc(��̬����) ������һ��Ƭ�����Ĵ洢�ռ� ʹ����֮��᷵��
//ָ����Ƭ�ռ�Ŀ�ʼ��ַ��ָ��
// free(����ռ�)
//maalloc������Ҫǿ��ת��Ϊ�㶨�������Ԫ������ָ��(ElemType)
//C++  new,delete �ؼ���


