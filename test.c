#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//���ݽṹ�Ĳ���
//���дһ���ӿڲ���һ���ӿ� ���һ���,�����˲�֪���ĸ�����д��󣡣���

//˳���
//����ͷβ����ɾ��
//void TestSeqList1() 
//{
//	//β���������
//	SeqList s;
//	SeqListInit(&s);
//	SeqListPushBack(&s, 1);
//	SeqListPushBack(&s, 2);
//	SeqListPushBack(&s, 3);
//	SeqListPushBack(&s, 4);
//	SeqListPushBack(&s, 5);//�����￪ʼ�Ѿ�����Խ����
//	SeqListPushBack(&s, 6);//Խ������Ƽ� �������Ǹ��㱻��ס�� �Żᱨ�� Ҳ����˵Խ��༭�����ܲ�����
//	SeqListPushBack(&s, 7);//���sizeΪ7 capacityΪ4 ��4���ռ�������7��Ԫ�� 
//	SeqListPushBack(&s, 8);//���ݹ��˾�û����
//	SeqListPushBack(&s, 9);
//	SeqListPrint(&s);
//	
//	//β��ɾ������
//	SeqListPopBack(&s);
//	SeqListPopBack(&s);
//	SeqListPrint(&s);
//
//	//ͷ���������
//	SeqListPushFront(&s, -1);//����-1
//	SeqListPushFront(&s, -2);
//	SeqListPushFront(&s, -3);
//
//	SeqListPrint(&s);
//	
//	//ͷ��ɾ������
//	SeqListPopFront(&s);
//	SeqListPopFront(&s);
//	SeqListPrint(&s);
//
//	//�м����
//	SeqListInsert(&s, 4, 5);//���±�Ϊ4�ĵط����� һ��Ԫ��5
//	SeqListPrint(&s);
//
//	//�м�ɾ��
//	SeqListErase(&s, 5);//ɾ���±������Ԫ�� Ҳ���ǵ�����Ԫ��
//	SeqListPrint(&s);
//
//	
//	int pos = SeqListFind(&s, 5);//�ҵ�5���Ԫ�ص��±� ����pos
//	if (pos != -1)
//	{
//		SeqListErase(&s, pos);//�����±�ɾ��5���Ԫ��
//	}
//	SeqListPrint(&s);
//	SeqListDestory(&s);
//}
//int main() 
//{
//	TestSeqList1();
//}


////����ͷ���ĵ�����
//ȱ��:���ܵ���������� βɾ ����ط����� ����ط�ɾ�� ʱ�临�Ӷȶ���O(n)
//��Ϊ��Ҫ��ͷ��ʼ��Ҫ�޸Ľ���ǰһ�����
//void SListNodeTest1() 
//{
//	SListNode* plist = NULL;
//	SListPushBack(&plist, 1);//����β��
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	SListPushFront(&plist, 0);
//	SListPrint(plist);//����ͷ����ֵ
//
//	SListPopFront(&plist);//����ͷɾ
//	SListPopFront(&plist);
//	SListPopFront(&plist);
//	SListPrint(plist);
//	SListPopFront(&plist);
//	SListPopFront(&plist);
//	SListPrint(plist);
//
//	SListPopBack(&plist);//����βɾ
//	SListPopBack(&plist);
//	SListPopBack(&plist);
//	SListPopBack(&plist);
//	SListPopBack(&plist);
//	SListPrint(plist);
//}
//void SListNodeTest2() 
//{
//	SListNode* plist = NULL;//��ͷ�ڵ�ĵ�ַ ����������ʲô��û�� ��NULL������
//	SListPushBack(&plist, 1);//����β��
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	//����3��ǰ�����һ��10 Ҫ���ҵ�3
//	SListNode* pos = SListFind(plist, 3);
//	//1ǰ���10
//	//SListNode* pos = SListFind(plist, 1);
//	if (pos) 
//	{
//		SListInsert(&plist, pos, 10);
//	}
//	SListPrint(plist);
//}
//
//void SListNodeTest3()
//{
//	SListNode* plist = NULL;//��ͷ�ڵ�ĵ�ַ ����������ʲô��û�� ��NULL������
//	SListPushBack(&plist, 1);//����β��
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	//ɾ�� posλ�õ�ֵ
//	SListNode* pos = SListFind(plist, 3);
//	if (pos)
//	{
//		SListErase(&plist, pos);
//	}
//	SListPrint(plist);
//
//	pos = SListFind(plist, 1);
//	if (pos)
//	{
//		SListErase(&plist, pos);
//	}
//	SListPrint(plist);
//}
//int main()
//{
//	SListNodeTest3();
//}


//��ͷ����˫��ѭ������ ��ͷ����Ǵ��ڱ�λ��ͷ��㣬�����㲻�洢��Ч����
//˫������������ָ�� ���(ָ����һ��ָ��) ǰ��(ָ���һ����ָ��) 
//��ͷ��㲻��Ҫ�ı䴫������ָ�룬Ҳ��ζ�Ų���Ҫ������ָ����

//void TestList1() 
//{
//	ListNode* plist = ListInit();
//	//ListNode* plist = ListInit(plist);//(����)��������д  error C4700:ʹ����δ��ʼ���ľֲ�������plist�� ��Ϊ����Ĳ�����plistδ��ʼ����ϾͰ�plist��Ϊ��������ȥ��
//	ListPushBack(plist, 1);
//	ListPushBack(plist, 2);
//	ListPushBack(plist, 3);
//	ListPushBack(plist, 4);
//	ListPushFront(plist, 0);
//	ListPopFront(plist, 0);//������������Ǽ�����ֻ����ͷɾ
//	ListPopBack(plist , 4);
//	ListPrint(plist);
//	ListDestory(plist);
//}
//void TestList2()
//{
//	ListNode* plist = ListInit();
//	ListPushBack(plist, 1);
//	ListPushBack(plist, 2);
//	ListPushBack(plist, 3);
//	ListPushBack(plist, 4);
//	ListPrint(plist);
//
//	ListNode* pos = ListFind(plist, 3);//���ҵ�4�����
//	if (pos) 
//	{
//		//���ң��������޸ĵ�����
//		pos->data *= 10;
//		printf("�ҵ���,���ҽ���ֵ����10\n");
//	}
//	else 
//	{
//		printf("δ�ҵ�\n");
//	}
//	ListPrint(plist);
//	ListInsert(pos, 300);
//	ListPrint(plist);
//	ListErase(pos);
//	ListPrint(plist);
//	int ret= ListEmpty(plist);
//	printf("%d\n", ret);//1 ����Ϊ��
//	int size = ListSize(plist);
//	printf("%d\n", size);
//}
//int main() 
//{
//	TestList2();
//	return 0;
//}