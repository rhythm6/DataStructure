#define _CRT_SECURE_NO_WARNINGS 1
//数据结构 
/*
二分查找的时间复杂度:
在N个长度的有顺序的数组中 每次与数组中间的元素比较 然后缩小一半(缩小一次查一次 ) 每次除2
x是查的次数
找到你想要的值 最坏情况是 2^x = N     O=(log2N)

递归算法如何计算:递归次数*每次递归的次数
阶乘递归的时间复杂度
long long Factorial的时间复杂度   
long long Factorial(size_t N)
{
return N< 2 ? N: Factorial(N-1)*N;

}斐波那契数列 第一行 2^0 个元素 第二行2^1个元素
//第三行 2^2 个元素 N行一共有2^N  -1个元素
//所以时间复杂度O= (2^N)
*/