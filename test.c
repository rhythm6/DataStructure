#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//���ݽṹ�Ĳ���
//���дһ���ӿڲ���һ���ӿ� ���һ���,�����˲�֪���ĸ�����д��󣡣���

//����ͷβ����ɾ��
void TestSeqList1() 
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);//�����￪ʼ�Ѿ�����Խ����
	SeqListPushBack(&s, 6);//Խ������Ƽ� �������Ǹ��㱻��ס�� �Żᱨ�� Ҳ����˵Խ��༭�����ܲ�����
	SeqListPushBack(&s, 7);//���sizeΪ7 capacityΪ4 ��4���ռ�������7��Ԫ�� 
	SeqListPushBack(&s, 8);//���ݹ��˾�û����
	SeqListPushBack(&s, 9);

	SeqListPrint(&s);
}
int main() 
{
	TestSeqList1();
}