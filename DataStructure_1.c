#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>
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


//oj���õ�����
struct ListNode 
{
	int val;
	struct ListNode* next;
};
//oj�� ��ת����
//��ת���� ����һ:ָ�뷴ת
//struct ListNode* reverseList(struct ListNode* head) 
//{
//	struct ListNode* n1, *n2 = head , *n3 = n2->next ;
//	while (n2) 
//	{
//		n2->next = n1;//n1��n2������ת�������֮���ָ��
//		n1 = n2;//��ת��ȫ��������
//		n2 = n3;
//		if (n3)//�ж�n3�Ƿ�Ϊ��
//		{
//			n3 = n3->next;//��Ϊ��Ҳ������ ��Ϊ�գ�n2ҲΪ�� ��һ��ѭ������ִ���� ָ�뷭ת���
//		}
//	}
// return n1;
//}

//��ת���� ������:ͷ�巨(����ͷ���ǰ�����)
//struct ListNode* reverseList(struct ListNode* head)
//{
//	struct ListNode* cur = head;//ԭ�����ͷ���
//	struct ListNode* newhead = NULL;//�������ͷ���
//
//	while (cur)
//	{
//		struct ListNode* next = cur->next;//���ԭ�����¸�����ֵ
//		cur->next = newhead;//���²���Ľ��ָ��ǰһ������Ľ��
//		newhead = cur;//���������ͷ�� 
//		cur = next;//cur��ǰ��һ�����
//	}
//	return newhead;
//}
//���������м��� ż���������������м����������еĵڶ������ 
//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* slow = head, *fast = head;//�������ָ�� ���������ָ�벽���Ķ���
//	while (fast && fast->next)//ѭ������ǽ��������� ����Ǽ���������
//	{
// 
//		slow = slow->next;//��һ��
//		fast = fast->next->next;//������
//		//ȸ����
//	}
//	return slow;
//}

//��������������ϲ�Ϊһ���µ���������
//l1 l2 ���������� tail���������β��� head���������ͷ���(head����) 
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
//				head = tail = l1;//ֱ�Ӱ�l1������β��
//			}
//			else 
//			{
//				tail->next = l1;
//				tail = tail->next;//��tailʼ�ձ���Ϊβ���
//			}
//			l1 = l1->next;//
//		}
//		else 
//		{
//			if (tail == NULL) 
//			{
//				head = tail = l2;//��l2������β��
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
//����Ľ�1
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
//{
//	if (l1 == NULL)
//		return l2;
//	if (l2 == NULL)
//		return l1;
//
//	struct ListNode* head = NULL, * tail = NULL;
//	//��ǰȡһ��ͷ�������
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
//			l1 = l1->next;//�ӵڶ�����㿪ʼ�жϺ�β��
//		}
//		else 
//		{
//			tail->next = l2;
//			l2 = l2->next;
//		}
//		tail = tail->next;//��tailʼ�ձ���Ϊβ���
//	}
//	if (l1)
//		tail - >next = l1;
//	if (l2)
//		tail -> next = l2;
//
//}
//�����ַ��� �����ڱ�λ
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
//{
//	if (l1 == NULL)
//		return l2;
//	if (l2 == NULL)
//		return l1;
//
//	struct ListNode* head = NULL, * tail = NULL;
////�����ڱ�λ
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
//		tail = tail->next;//��tailʼ�ձ���Ϊβ���
//	}
//	if (l1)
//		tail -> next = l1;
//	if (l2)
//		tail -> next = l2;
//	struct ListNode* first = head->next;//���ص���������ͷ��� �����ڱ�λ��
//	free(head);
//	return first;
//}

//����Ļ�����β���ָ���������γɵĻ� ����ָ��ͷ���Ļ� ����ѭ������ 
//�����л����������ָ�����߲���� �����Ǹ�����һֱת
//�ж������Ƿ��л�
//bool hasCycle(struct ListNode* head)
//{
//	struct ListNode* slow = head, * fast = head;//�������ָ�������
//	while(fast )//�����ָ�벻Ϊ��(û����) �Ҳ�����ָ����ͬ �ͼ�����
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//		if (slow == fast)
//			return true;//�л���ͣ��
//	}
//	//fast������˵��û�л�
//	return false;
//}
//��������:
//��֤��fast��slowһ�����������п�����Զ׷��������fast������ slow��һ���������һ����׷��
//2.slowһ����һ����fast��3���в��� //�п���׷����
//3.slowһ����һ��,fast��4���в���  //Ҳ�п���׷����
//֤��:��fast������ slow��һ�� ���軷��ΪN ��ô����ָ��֮�����ΪN-1 ����ָ��ÿ��һ�� ����֮��ľ���-1 ������Ϊ0 ����ָ������
//��fast������ slow��һ�� ����ָ��ÿ��һ�� ����֮��ľ���-2 ��ʱ��N-1Ϊż�� �Ϳ�ָ���׷������ָ�� ��N-1Ϊ���� ���������ʱ�����Ϊ-1 Ҳ���ǿ�ָ�뷴���� ��ԶҲ׷����