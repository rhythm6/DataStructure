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
