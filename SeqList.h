#pragma once //��ֹ���ظ�����
#include <stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
//�������ݽṹ������

//˳���,��Ч�����������б���������
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
//void SeqListPushBack(SL* ps, SLDataType x);//ͷ������
//void SeqListPopBack(SL* ps, int x);//β������
//void SeqListPushFront(SL* ps, SLDataType x);//ͷ�ϵ�ɾ��
//void SeqListPopFront(SL* ps);//β��ɾ��


//��̬˳������ (��С�ɱ�)
typedef int SLDataType;//�������ĺô�������ʱ����˳������������
//�����SLDataType���������� ֱ���õ�ʱ�� ��������

//vector
typedef struct SeqList
{
	SLDataType* a;//˳���ı� ָ��̬���ٵ�����
	int size;//��Ч���ݵĸ��� ͬʱҲ�����һ��Ԫ�ص��±�
	int capacity;//����
}SL,SeqList;
void SeqListInit(SL* ps);
void SeqListPrint(SL* ps);//��ӡ�����ֵ

void SeqListPushBack(SL* ps, SLDataType x);//β������
void SeqListPopBack(SL* ps, int x);//β��ɾ��
void SeqListPushFront(SL* ps, SLDataType x);//ͷ�ϵĲ���
void SeqListPopFront(SL* ps);//ͷ�ϵ�ɾ��

//�м�λ�ò����ɾ��
void seqListInsert(SL* ps, int pos, SLDataType x);//�ṹ�� �����λ�� ���������
void seqListErase(SL* ps, int pos);//�ṹ�� ɾ����λ��
