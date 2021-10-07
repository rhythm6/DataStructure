#define _CRT_SECURE_NO_WARNINGS 1
//���غ�������ݽṹ��
#include"SeqList.h"
//SeqList��ʵ��
void SeqListInit(SL* ps) 
{
	/*s.size = 0;
	s.a = NULL;
	s.capacity = 0;*/

	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);//�������ĸ��ռ� ���Դ���ĸ�Ԫ�� Ҳ����capacity��ֵΪ4
	if (ps->a == NULL)//�ṹ��ָ�� ���ʽṹ����->
	{
		printf("�����ڴ�ʧ��\n");
		exit(-1);//ֱ�ӽ���������
	}
	ps->size = 0;
	ps->capacity = 4;
}

void SeqListPrint(SL* ps) 
{
	int i = 0;
	assert(ps);
	for ( i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListPushBack(struct SeqList* ps, SLDataType x) 
{
	assert(ps);//psһ������Ϊ�� Ϊ��ֱ����������

	//���������Ҫ����  һ�����ӵ�ԭ���Ķ��� ������ ����Ƶ�� ���Ķ� �˷ѿռ�
	if(ps->size >= ps->capacity)//�������������ڵ����������� ˵����������
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);//realloc ����1 ԭ���Ŀռ� ����2 ��Ҫ���¿ռ�
		if (ps->a == NULL)//�������Ϊ��
		{
			printf("����ʧ��\n");
			exit(-1);//zֱ�Ӹɵ����� ��仰̫�ֱ� ����������ֱ�����ȶ�������ֱ������
		}
	}

	//����������㹻�Ŀռ� ԭ�����ݣ�������û���㹻�Ŀռ� ��һ���µĿռ�����ݿ���ȥ�����ͷŵ��͵ÿռ�
	ps->a[ps->size] = x;//ͨ���ṹ��ָ���������a, ps->size���λ�õ�Ԫ�� �������λ�õ�ֵΪx
	ps->size++;//��һ������
}//β������
void SeqListPopBack(struct SeqList* ps, int x);//β��ɾ��
void SeqListPushFront(struct SeqList* ps, SLDataType x);//ͷ�ϵĲ���
void SeqListPopFront(struct SeqList* ps);//ͷ�ϵ�ɾ��

//�м�λ�ò����ɾ��
void seqListInsert(struct SeqList* ps, int pos, SLDataType x);//�ṹ�� �����λ�� ���������
void seqListErase(struct SeqList* ps, int pos);//�ṹ�� ɾ����λ��

