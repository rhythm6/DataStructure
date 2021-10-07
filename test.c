#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//数据结构的测试
//最好写一个接口测试一个接口 如果一起测,错误了不知道哪个借口有错误！！！

//测试头尾插入删除
void TestSeqList1() 
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);//从这里开始已经发生越界了
	SeqListPushBack(&s, 6);//越界就像查酒驾 必须在那个点被逮住了 才会报错 也就是说越界编辑器可能不报错
	SeqListPushBack(&s, 7);//最后size为7 capacity为4 你4个空间现在有7个元素 
	SeqListPushBack(&s, 8);//扩容过了就没事了
	SeqListPushBack(&s, 9);

	SeqListPrint(&s);
}
int main() 
{
	TestSeqList1();
}