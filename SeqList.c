#define _CRT_SECURE_NO_WARNINGS 1
//���غ�������ݽṹ��
#include"SeqList.h"

//˳���
//SeqList��ʵ��
//void SeqListInit(SL* ps) 
//{
//	/*s.size = 0;
//	s.a = NULL;
//	s.capacity = 0;*/
////��ʼ��˳��� Ϊ�俪�ٿռ�
//	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);//�������ĸ�SLDataType��С�Ŀռ� 
//	if (ps->a == NULL)//�ṹ��ָ�� ���ʽṹ���Ա��->
//	{
//		printf("�����ڴ�ʧ��\n");
//		exit(-1);//ֱ�ӽ���������
//	}
//	ps->size = 0;
//	ps->capacity = 4;
//}
////��ӡ˳�������
//void SeqListPrint(SL* ps) 
//{
//	int i = 0;
//	assert(ps);
//	for ( i = 0; i < ps->size; i++)
//	{
//		printf("%d ", ps->a[i]);
//	}
//	printf("\n");
//}
////���ռ��Ƿ��㹻 
//void SeqListCheckCapacity(SL* ps) 
//{
//	//���������Ҫ����  һ�����ӵ�ԭ���Ķ��� ������ ����Ƶ�� ���Ķ� �˷ѿռ�
//	if (ps->size >= ps->capacity)//�������������ڵ����������� ˵����������
//	{
//		ps->capacity *= 2;
//		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);//realloc ����1 ԭ���Ŀռ� ����2 ��Ҫ���¿ռ�
//		if (ps->a == NULL)//�������Ϊ��
//		{
//			printf("����ʧ��\n");
//			exit(-1);//ֱ�Ӹɵ����� ��仰̫�ֱ� ����������ֱ�����ȶ�������ֱ������
//		}
//	}
//	//����������㹻�Ŀռ� ԭ�����ݣ�������û���㹻�Ŀռ� ��һ���µĿռ�����ݿ���ȥ�����ͷŵ��ɵĿռ�
//}
////����˳���
//void SeqListDestory(SL* ps)
//{
//	free(ps->a);//��ָ����ָ��Ŀռ��ͷ�
//	ps->a = NULL;//��ָ���Ϊ��ָ��
//	ps->size = ps->capacity = 0;//�ٰ��������ݶ���Ϊ0
//}
////β������
//void SeqListPushBack(SL* ps, SLDataType x) 
//{
//	/*
//	assert(ps);//psһ������Ϊ�� Ϊ��ֱ����������
//	SeqListCheckCapacity(ps);
//
//	ps->a[ps->size] = x;//ͨ���ṹ��ָ���������a, ps->size���λ�õ�Ԫ�� �������λ�õ�ֵΪx
//	ps->size++;//��һ������
//	������Ĵ����ͬ��������һ��
//	*/
//	SeqListInsert(ps, ps->size, x);
//}
//
////β��ɾ��
//void SeqListPopBack(SL* ps) 
//{
//	assert(ps);
//	//ps->a[ps->size - 1] = 0; ��ĵ���ɾ��ĳ����� ����Ϊֻ�ǰ��ļ�ϵͳ������ɾ���� ��ʵ�ļ�û��ɾ ֱ����Щ�ļ��Ŀռ䱻�����ļ����� �Ż���ȫ��Ϣ
//	//�����������д��벻��Ҫ ��һ�Ǹ��ط���������0��
//	ps->size--;
//}
////ͷ������ //�����ʱ��һ��Ҫע��size�Ƿ񳬹���Capacity 
//void SeqListPushFront(SL* ps, SLDataType x)//ͷ�ϵĲ��� //û�нӿڿ���ֱ��������ǰ�����ӿռ� ֻ���Ȱ�Ҫ����λ�õ���������Ų
//{
//	/*
//	assert(ps);
//	SeqListCheckCapacity(ps);//�������ݺ���
//	int end = ps->size - 1;//end�������������һ��Ԫ��
//	while (end >=0 )//һֱ����һ��Ԫ��Ҳ������Ų��ѭ��ֹͣ
//	{
//		ps->a[end + 1] = ps->a[end];//��ǰ����Ų
//		--end;//end��λ����ǰ��һλ
//	}
//	ps->a[0] = x;//��x�Ž�ͷ�ϵ�λ��
//	ps->size++;//����Ч���ݵĸ���,��һλ
//	����������д����ͬ������һ��
//	*/
//	SeqListInsert(ps, 0, x);
//}
////ͷ�ϵ�ɾ��
//void SeqListPopFront(SL* ps) 
//{
//	assert(ps);
//	int start = 0;
//	while (start<= ps->size-2)//���һ��Ԫ����size-1 ��start�ǰѺ����Ԫ����ǰ��Ų ����start�����һ��λ����size-2
//	{
//		ps->a[start] = ps->a[start + 1];//�Ӻ���ǰŲ �ѵ�һ��Ԫ�ظ����ǵ� �ٰ����һ��Ԫ�ظ�ɾ��
//		++start;
//	}
//	ps->size--;
//}
//
////�м�λ�ò���
//void SeqListInsert(SL* ps, int pos, SLDataType x) //�ṹ�� �����λ�� ���������
//{
//	assert(ps);
//	assert(pos <= ps->size && pos >= 0);//����ط�С�ڵ���ps->size �����β��Ϳ��Բ�д�� ֱ�ӵ���
//	SeqListCheckCapacity(ps);//��������(��� )����
//	int middleInsert = ps->size - 1;//middleInsert�����һ��Ԫ�ص�λ��
//	while (middleInsert >= pos)//���middleInsert��λ����pos��λ�ú���
//	{
//		ps->a[middleInsert + 1] = ps->a[middleInsert];//��posҪ�����λ�ú����Ԫ��ȫ�����Ų
//		--middleInsert;//����д��++ д�ɸ���ѭ����..
//	}
//	ps->a[pos] = x;//���ݷŽ�ȥ
//	ps->size++;//Ԫ�ظ�����1
//}
//
////�м�λ��ɾ��
//void SeqListErase(SL* ps, int pos) //�ṹ�� ɾ����λ��
//{
//	assert(ps);
//	int middleDel = pos;//middleDel��pos���ұ�
//	while (middleDel < ps->size -1)//ֹͣ��� С�ڵ������һ��λ��
//	{
//		ps->a[middleDel] = ps->a[middleDel+1];//��pos��λ��Ų����� Ȼ��ɾ��
//		++middleDel;
//	}
//	ps->size--;
//}
////����
//int SeqListFind(SL* ps, SLDataType x) //�ҵ��� ���ظ�Ԫ�ص��±�
//{
//	assert(ps);
//	int i = 0;
//	while (i < ps->size)
//	{
//		if (ps->a[i] == x)
//		{
//			return i;//�ҵ�����i
//		}
//		++i;
//	}
//	//�Ҳ���
//	return -1;
//}


//����
//������
SListNode * CreateSListNode(SListDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL) 
	{
		printf("������ʧ��");
	}
	newNode -> data = x;
	newNode -> next = NULL;
	return newNode;
}
//�߱��� �ߴ�ӡ����
void SListPrint(SListNode* phead)
{
	                        
	SListNode* cur = phead;
	while (cur != NULL) 
	{
		printf(" %d->",cur->data);
		cur = cur-> next;
	}
	printf("->NULL\n");
}
void SListPushBack(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = CreateSListNode(x);
	if (*pphead == NULL) 
	{
		*pphead = newNode;
	}
	else 
	{
		//��β���(tail β��)
		SListNode* tail = *pphead;
		while (tail->next != NULL)//����next�������һ������ַ��˵����ǰnext����β���
		{
			tail = tail->next;//ͨ��next����β��� ��Ϊֻ��next���ҵ���һ�����
		}
		tail -> next = newNode;
	}
}