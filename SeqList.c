#define _CRT_SECURE_NO_WARNINGS 1
//比特航哥的数据结构课
#include"SeqList.h"

//顺序表
//SeqList的实现
//void SeqListInit(SL* ps) 
//{
//	/*s.size = 0;
//	s.a = NULL;
//	s.capacity = 0;*/
////初始化顺序表 为其开辟空间
//	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);//开辟了四个SLDataType大小的空间 
//	if (ps->a == NULL)//结构体指针 访问结构体成员用->
//	{
//		printf("申请内存失败\n");
//		exit(-1);//直接结束掉程序
//	}
//	ps->size = 0;
//	ps->capacity = 4;
//}
////打印顺序表内容
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
////检查空间是否足够 
//void SeqListCheckCapacity(SL* ps) 
//{
//	//如果满了需要增容  一般增加到原来的二倍 增的少 增加频繁 增的多 浪费空间
//	if (ps->size >= ps->capacity)//如果数组个数大于等于数组容量 说明数组满了
//	{
//		ps->capacity *= 2;
//		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);//realloc 参数1 原来的空间 参数2 你要的新空间
//		if (ps->a == NULL)//如果数组为空
//		{
//			printf("扩容失败\n");
//			exit(-1);//直接干掉程序 这句话太粗暴 就像生病了直接抢救都不抢救直接埋了
//		}
//	}
//	//如果后面有足够的空间 原地增容，若后面没有足够的空间 找一块新的空间把数据拷过去，再释放掉旧的空间
//}
////销毁顺序表
//void SeqListDestory(SL* ps)
//{
//	free(ps->a);//把指针所指向的空间释放
//	ps->a = NULL;//把指针变为空指针
//	ps->size = ps->capacity = 0;//再把其他数据都变为0
//}
////尾部插入
//void SeqListPushBack(SL* ps, SLDataType x) 
//{
//	/*
//	assert(ps);//ps一定不能为空 为空直接让它报错
//	SeqListCheckCapacity(ps);
//
//	ps->a[ps->size] = x;//通过结构体指针访问数组a, ps->size这个位置的元素 插入这个位置的值为x
//	ps->size++;//加一个长度
//	这里面的代码等同于下面这一行
//	*/
//	SeqListInsert(ps, ps->size, x);
//}
//
////尾部删除
//void SeqListPopBack(SL* ps) 
//{
//	assert(ps);
//	//ps->a[ps->size - 1] = 0; 你的电脑删除某个软件 是因为只是把文件系统的链接删除了 真实文件没有删 直到这些文件的空间被其他文件覆盖 才会完全消息
//	//所以上面这行代码不需要 万一那个地方本来就是0呢
//	ps->size--;
//}
////头部插入 //插入的时候一定要注意size是否超过了Capacity 
//void SeqListPushFront(SL* ps, SLDataType x)//头上的插入 //没有接口可以直接在数据前方增加空间 只能先把要插入位置的数据往后挪
//{
//	/*
//	assert(ps);
//	SeqListCheckCapacity(ps);//调用扩容函数
//	int end = ps->size - 1;//end是这个数组的最后一个元素
//	while (end >=0 )//一直到第一个元素也被往后挪，循环停止
//	{
//		ps->a[end + 1] = ps->a[end];//从前往后挪
//		--end;//end的位置往前走一位
//	}
//	ps->a[0] = x;//把x放进头上的位置
//	ps->size++;//给有效数据的个数,加一位
//	这里面的所有代码等同于下面一行
//	*/
//	SeqListInsert(ps, 0, x);
//}
////头上的删除
//void SeqListPopFront(SL* ps) 
//{
//	assert(ps);
//	int start = 0;
//	while (start<= ps->size-2)//最后一个元素是size-1 而start是把后面的元素往前面挪 所以start的最后一个位置是size-2
//	{
//		ps->a[start] = ps->a[start + 1];//从后往前挪 把第一个元素给覆盖掉 再把最后一个元素给删掉
//		++start;
//	}
//	ps->size--;
//}
//
////中间位置插入
//void SeqListInsert(SL* ps, int pos, SLDataType x) //结构体 插入的位置 插入的数据
//{
//	assert(ps);
//	assert(pos <= ps->size && pos >= 0);//这个地方小于等于ps->size 上面的尾插就可以不写了 直接调用
//	SeqListCheckCapacity(ps);//调用扩容(检查 )函数
//	int middleInsert = ps->size - 1;//middleInsert是最后一个元素的位置
//	while (middleInsert >= pos)//如果middleInsert的位置在pos的位置后面
//	{
//		ps->a[middleInsert + 1] = ps->a[middleInsert];//将pos要插入的位置后面的元素全部向后挪
//		--middleInsert;//这里写成++ 写成个死循环了..
//	}
//	ps->a[pos] = x;//数据放进去
//	ps->size++;//元素个数加1
//}
//
////中间位置删除
//void SeqListErase(SL* ps, int pos) //结构体 删除的位置
//{
//	assert(ps);
//	int middleDel = pos;//middleDel是pos的右边
//	while (middleDel < ps->size -1)//停止结果 小于等于最后一个位置
//	{
//		ps->a[middleDel] = ps->a[middleDel+1];//将pos的位置挪到最后 然后删除
//		++middleDel;
//	}
//	ps->size--;
//}
////查找
//int SeqListFind(SL* ps, SLDataType x) //找到后 返回该元素的下标
//{
//	assert(ps);
//	int i = 0;
//	while (i < ps->size)
//	{
//		if (ps->a[i] == x)
//		{
//			return i;//找到返回i
//		}
//		++i;
//	}
//	//找不到
//	return -1;
//}


//链表
//申请结点
SListNode * CreateSListNode(SListDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL) 
	{
		printf("申请结点失败");
	}
	newNode -> data = x;
	newNode -> next = NULL;
	return newNode;
}
//边遍历 边打印链表
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
		//找尾结点(tail 尾部)
		SListNode* tail = *pphead;
		while (tail->next != NULL)//若·next还存放下一个结点地址，说明当前next不是尾结点
		{
			tail = tail->next;//通过next查找尾结点 因为只有next能找到下一个结点
		}
		tail -> next = newNode;
	}
}