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


////����
int main() 
{
	SListNode* pList = NULL;//��ͷ�ڵ�ĵ�ַ ����������ʲô��û�� ��NULL������

	SListPushBack(&pList, 1);//����β��
	SListPushBack(&pList, 2); 
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);

	SListPrint(pList);//����ͷ����ֵ
}
