#pragma once //��ֹ���ظ�����
#include <stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
//�������ݽṹ������

//˳���,��Ч�����������б���������
// ˳����ȱ�� �����˷ѿռ� ͷ��ͷɾ�� ʱ�临�Ӷ�O(n) ������Ų�������� ���������������
//��̬˳������ (�̶���С)
//typedef int SLDataType;//�������ĺô�������ʱ����˳������������
//#define N 10 //����˳�����
//
//SL
//{
//	SLDataType a[N];//˳���ı�
//	int size;
//};
//
//void SeqListPushBack(SL* ps, SLDataType x);//β������
//void SeqListPopBack(SL* ps);//β��ɾ��
//void SeqListPushFront(SL* ps, SLDataType x);//ͷ�ϵ�ɾ��
//void SeqListPopFront(SL* ps);//ͷ��ɾ��


////��̬˳������ (��С�ɱ�)
//typedef int SLDataType;//�������ĺô�������ʱ����˳������������
////�����SLDataType���������� ֱ���õ�ʱ�� ��������
//
////vector
//typedef struct SeqList
//{
//	SLDataType* a;//˳���ı� ָ��̬���ٵ�����
//	int size;//��Ч���ݵĸ��� ͬʱҲ�����һ��Ԫ�ص��±�
//	int capacity;//����
//}SL,SeqList;
//void SeqListInit(SL* ps);
//void SeqListDestory(SL* ps);
//void SeqListPrint(SL* ps);//��ӡ�����ֵ
//void SeqListCheckCapacity(SL *ps);//�������
//void SeqListPushBack(SL* ps, SLDataType x);//β������
//void SeqListPopBack(SL* ps);//β��ɾ��
//void SeqListPushFront(SL* ps, SLDataType x);//ͷ�ϵĲ���
//void SeqListPopFront(SL* ps);//ͷ�ϵ�ɾ��
//
////�м�λ�ò����ɾ��
//void SeqListInsert(SL* ps, int pos, SLDataType x);//�ṹ��ָ�� �����λ�� ���������
//void SeqListErase(SL* ps, int pos);//�ṹ��ָ�� ɾ����λ��
//
////˳������
//int SeqListFind(SL* ps, SLDataType x);


////����
//���(NO\ode) �ڵ� ��ͬ����д�Ĳ�ͬ
typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;//�ṹ���׽ṹ�� ���ָ��ָ����һ���ṹ�� ��һ���ṹ�����滹��һ��nextָ�� ��������
}SListNode;
void SListPushBack(SListNode** pphead, SListDataType x);//β��
void SListPopBack(SListNode* phead);//βɾ

void SListPushFront(SListNode* phead, SListDataType x);//ͷ��
void SListPopFront(SListNode* phead);//ͷɾ

void SListPrint(SListNode* phead);//��ӡ����
