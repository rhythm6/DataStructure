#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
//ʱ�临�Ӷȼ���
//void Loveyou(int n)//nΪ�����ģ
//{
//	int i = 1;//1��
//	while (i < n) //301��
//	{
//		i++;//300��
//		printf("ִ�д���%d",i);//ִ��300��
//	}
//	printf("LOL%d\n", n);//1��
//}
//int main() 
//{
//	Loveyou(300);//�����ģ300��
//	return 0;
//}
//T(300) = 1+301+2*300+1 = 903 
//�������ģn 300�� ����T(n) = 3n+3	��O��ʾT(n) = O(n)	
//����1:˳��ִ�еĴ���ֻ��Ӱ�쳣������Ժ��ԡ�
//����2:ֻ����ѭ���е�һ������������������ִ�д�����n�Ĺ�ϵ����
//����3:����ж��Ƕ��ѭ��,ֻ���ע�����ѭ��ѭ������ ����Ƕ��������һ��

//void LoveYou(int n) 
//{
//	int i = 1;
//	while (i <= n) 
//	{
//		i = i * 2;
//		printf("I= %d��\n",i);//i=x^n ����n = log2n,T(n) = O(log2n)
//	}
//	printf("N= %d��",n);
//}
//int main() 
//{
//	LoveYou(5);//�����ģ300��
//	return 0;
//}

//����������Ԫ�ط��������Ĵ洢�ռ�,��СΪMaxSize*sizeof(ElempType)


//˳����ʵ��--��̬����
//#define InitSize 10
//typedef struct  //typedef��������������
//{
//	int* data;//ָʾ��̬���������ָ��
//	int MaxSize;//˳���������  ��
//	int length; //˳���ĵ�ǰ����
//}SeqList; //����ǽṹ�������
//void InitList(SeqList* L)
//{
//	//��malloc ��������һƬ�����Ĵ洢�ռ�
//	L->data = (int*)malloc(InitSize * sizeof(int));//malloc ������10��ָ��int���ͳ��ȵĿռ�,ǿ��ת��Ϊint*�� ���ֵ�ڸ�L->data
//	L->length = 0;//��ʼ��˳���
//	L->MaxSize = InitSize;//���60����ͬ 10 ��ʼ��˳�������
//}
//
////���Ӷ�̬����ĳ���
//void IncreaseSize(SeqList* L, int len) //len�����ӵĳ���
//{
//	int* p = L -> data;//����ָ��
//	L->data = (int* )malloc(( L-> MaxSize+len)* sizeof(int));//������len����5��ManSize10�������ڸ�L->data
//	int i = 0;
//	for (i = 0; i < L->length; i++) //���¿ռ� ͨ�����黻��λ�ô��
//	{
//		L->data[i] = p[i];//˳����Ԫ�������ŷŵ� �������Ż�λ��ûë��
//	}
//	L->MaxSize = L->MaxSize + len;//����˳����������
//	free(p);//�ͷ��ڴ�ռ�
//}
//int main()   
//{
//	SeqList L;
//	InitList(&L);
//	IncreaseSize(&L, 5);
//	return 0;
//}