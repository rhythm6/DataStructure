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


//����ͷ���ĵ�����
//������
//#include "SeqList.h"
//SListNode* CreateSListNode(SListDataType x)
//{
//	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
//	if (newNode == NULL)
//	{
//		printf("������ʧ��");
//	}
//	newNode->data = x;
//	newNode->next = NULL;
//	return newNode;	
//}
////�߱��� �ߴ�ӡ����
//void SListPrint(SListNode* phead)
//{
//
//	SListNode* cur = phead;
//	while (cur != NULL)
//	{
//		printf(" %d->", cur->data);
//		cur = cur->next;
//	}
//	printf("->NULL\n");
//}
//
////β�� 
//void SListPushBack(SListNode** pphead, SListDataType x)
//{
//	SListNode* newNode = CreateSListNode(x);
//	if (*pphead == NULL)
//	{
//		*pphead = newNode;
//	}
//	else
//	{
//		//��β���(tail β��)
//		SListNode* tail = *pphead;
//		while (tail->next != NULL)//����next�������һ������ַ��˵����ǰnext����β���
//		{
//			tail = tail->next;//ͨ��next����β��� ��Ϊֻ��next���ҵ���һ�����
//		}
//		tail->next = newNode;
//	}
//}
//
////βɾ
//void SListPopBack(SListNode** pphead)
//{
//	//�������
//	//1����Ϊ��
//	if (*pphead == NULL)
//	{
//		return ;
//	}
//	//2���ֻ��һ�����(ֻ��ͷ���) ������û��ǰһ����� ��ʱprev��tail��һ��λ��  ���ͷ�tail�Ŀռ� prevΪ�� prev->next =NULL; ��ָ��ָ���ַ���������
//	else if ((*pphead)->next == NULL)
//	{
//		free(*pphead);
//		*pphead = NULL;
//	}
//	else 
//	{
//		SListNode* prev = NULL;//prev��Ҫ�ҵĽ���ǰһ�����
//		SListNode* tail = *pphead;
//		while (tail->next != NULL)
//		{
//			prev = tail;
//			tail = tail->next;
//		}
//		free(tail);
//		prev->next = NULL;
//	}
//}
//
////ͷɾ
//void SListPopFront(SListNode** pphead)
//{
//	SListNode* next = (*pphead)->next;//*��->���ȼ�һ�� ������()�Ƚ�����  �Ȱ�ͷ���ָ����¸����ĵ�ַ��������
//	//����һ��ȥ�Ͱ�ͷ���free�� ��Ϊ�������Ҳ�����һ������� 
//	free(*pphead);//�ͷ�ͷ���ռ�
//	*pphead = next;//�µ�ͷ����ַ����һ�����ĵ�ַ 
//}
//
////ͷ��
//void SListPushFront(SListNode** pphead, SListDataType x)
//{
//	SListNode* newNode = CreateSListNode(x);//����һ���ڵ�
//	newNode->next = *pphead;//�´�����ͷ���ָ��ԭ����ͷ�ڵ� 
//	*pphead = newNode;//��ͷ��㻻������²����ͷ��� 
//}
//
////����
//SListNode* SListFind(SListNode* phead, SListDataType x)
//{
//	SListNode* cur = phead;;
//	while (cur)
//	{
//		if (cur->data == x)//���ж�������һ��
//		{
//			return cur;//�ҵ��� �з���ֵ ��������Ҫд���ص����ͣ�����
//			//���򱨴�xxx���Ͳ������ڳ�ʼ��xxx���͵�ʵ��
//		}
//		cur = cur->next;
//	}
//	return NULL;
//}
//
////��pos��ǰ����� 
//void SListInsert(SListNode** pphead, SListNode* pos, SListDataType x)
//{
//	//�������
//	//��ͷ������ʱ prev->next��Զ������pos �������
//	if (pos == *pphead) 
//	{
//		SListPushFront(pphead,x);//�˺������յľ���һ��ָ�� ֱ�Ӵ�ָ������ͷ�庯������
//	}
//	else 
//	{
//		SListNode* newNode = CreateSListNode(x);
//		SListNode* prev = *pphead;
//		while (prev->next != pos)//��ǰһ�����
//		{
//			prev = prev->next;
//		}
//		prev->next = newNode;//�½��ǰһ�����ָ���½��
//		newNode->next = pos;//�½��ָ��pos����λ�õĽ��
//	}
//	
//}
//
////ɾ��posλ�õط���ֵ
//void SListErase(SListNode** pphead, SListNode* pos) 
//{
//	if (pos == *pphead)//�����ͷ��� ����ѭ���Ҳ���prev����
//	{
//		SListPopFront(pphead);//ִ��ͷɾ
//	}
//	else
//	{
//		SListNode* prev = *pphead;
//		while (prev->next != pos) //��ɾ������ǰһ�����
//		{
//			prev = prev->next;
//		}
//		prev->next = pos->next;//prevԭ��ָ��pos ����ָ��pos����һ�����
//		free(pos);
//	}
//}


//��ͷ˫��ѭ������ ���ŵ�����ṹ������λ�ò���ɾ������O(1)!!!
//ListNode* BuyListNode(LTDataType x)
//{
//	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
//	newnode->data = x;
//	newnode->next = NULL;
//	newnode->prev = NULL;
//	return newnode;
//}
////��ʼ��
//ListNode* ListInit() 
//{
//	ListNode* phead = BuyListNode(0);//���뿪�ٽ���λ��
//	phead->next = phead;//���ָ���Լ�
//	phead->prev = phead;//ǰ��Ҳָ���Լ�
//	return phead;
//}
////����
//void ListDestory(ListNode* phead) 
//{
//	ListNode* cur = phead->next;
//	while (cur != phead) 
//	{
//		ListNode* next = cur->next;//��סcur��һ������λ��
//		free(cur);
//		cur = next;
//	}
//	free(phead);
//	phead = NULL;
//}
////β��
//void ListPushBack(ListNode* phead, LTDataType x) 
//{
//	assert(phead);
//	/*
//	//���������β��һ�� ��һ������β
//	ListNode* tail = phead->prev;//ͷ����ǰ�� ���������β��
//	
//	ListNode* newnode = BuyListNode(x);//�����½��
//	tail->next = newnode;//ͷ����ǰ���ĺ��(�����ԭβ��)ָ���½��
//	newnode->prev = tail;//�½���ǰ��ָ��tail
//	newnode->next = phead;//�½��ĺ��ָ��ͷ���
//	phead->prev = newnode;//ͷ����ǰ��ָ���½��
//	//��ͬ������һ��
//	*/
//	ListInsert(phead, x);//β�������ͷ���֮ǰ����
//}
//void ListPrint(ListNode* phead) 
//{
//	ListNode* cur = phead->next;
//	while (cur!= phead)
//	{
//		printf("->%d ",cur->data);
//		cur = cur->next;
//	}
//	printf("\n");
//}
////ͷ��
//void ListPushFront(ListNode* phead, LTDataType x)
//{
//	assert(phead);
//	/*
//	ListNode* first = phead->next;//first�ǵڶ������
//	ListNode* newnode = BuyListNode(x);
//
//	phead->next = newnode;
//	newnode->prev = phead;
//	newnode->next = first;
//	first->prev = newnode;
//	//�������ͬ��*/
//	ListInsert(phead->next,x);
//}
////ͷɾ
//void ListPopFront(ListNode* phead, LTDataType x)
//{
//	assert(phead);
//	ListNode* first = phead->next;
//	ListNode* second = first->next;
//	phead->next = second;
//	second->prev = phead;
//	free(first);
//	first = NULL;
//}
////βɾ
//void ListPopBack(ListNode* phead, LTDataType x) 
//{
//	assert(phead);
//	assert(phead->next != phead);//ֻ��ͷ���ͱ���
//	//�ȶ�������ָ��ָ��β ��βǰ����Ǹ����
//	//Ȼ����βǰ���Ǹ����nextָ��ͷ���
//	//ͷ����prevָ��βǰ���Ǹ����
//	ListNode* tail = phead->prev;
//	ListNode* tailprev = tail->prev;
//	tailprev->next = phead;
//	phead->prev = tailprev;
//	free(tail);
//	tail = NULL;
//}
//
////����
//ListNode* ListFind(ListNode* phead, LTDataType x)
//{
//	assert(phead);
//	ListNode* cur = phead->next;
//	while (cur != phead)
//	{
//		if (cur->data == x)
//		{
//			return cur;
//		}
//		cur = cur->next;
//	}
//	return NULL;
//}
////posλ��֮ǰ����x �������Ҳ���Ե�ͷ��β����
//void ListInsert(ListNode* pos, LTDataType x) 
//{
//	assert(pos);
//	ListNode* posprev = pos->prev;
//	ListNode* posnext = pos->next;
//	ListNode* newnode = BuyListNode(x);
//	posprev->next = newnode;
//	newnode->prev = posnext;
//	newnode->next = pos;
//	pos->prev = newnode;
//}
////ɾ��posλ�õ�ֵ �������Ҳ���Ե�ͷɾβɾ��
//void ListErase(ListNode* pos) 
//{
//	assert(pos);
//	ListNode* posprev = pos->prev;
//	ListNode* posnext = pos->next;
//	posprev->next = posnext;
//	posnext->prev = posprev;
//	free(pos);
//	pos = NULL;
//}
////�ж������Ƿ�Ϊ��
//bool ListEmpty(ListNode* phead)
//{
//	if (phead->next == NULL)
//	{
//		return false;//ʵ�ʷ��ص���0 ѡ��ת��������Բ鿴
//	}
//	else
//	{
//		return true;//ʵ�ʷ��ص���1
//	}
//}
////���������С
//int ListSize(ListNode* phead) 
//{
//	int count = 0;
//	ListNode* cur = phead;
//	//while (phead->next != phead)//�ܴ�����ѭ�� �Լ�����һ��ʲôʱ������Լ� ����������
//	while(cur->next != phead)
//	{
//		cur = cur->next;
//		count++;
//	}
//	return count;
//}