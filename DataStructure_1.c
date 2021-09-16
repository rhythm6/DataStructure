#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
//时间复杂度计算
//void Loveyou(int n)//n为问题规模
//{
//	int i = 1;//1次
//	while (i < n) //301次
//	{
//		i++;//300次
//		printf("执行次数%d",i);//执行300次
//	}
//	printf("LOL%d\n", n);//1次
//}
//int main() 
//{
//	Loveyou(300);//问题规模300次
//	return 0;
//}
//T(300) = 1+301+2*300+1 = 903 
//而问题规模n 300次 所以T(n) = 3n+3	用O表示T(n) = O(n)	
//结论1:顺序执行的代码只会影响常数项可以忽略。
//结论2:只需跳循环中的一个基本操作分析它的执行次数与n的关系即可
//结论3:如果有多层嵌套循环,只需关注最深层循环循环次数 就是嵌套最多的那一层

//void LoveYou(int n) 
//{
//	int i = 1;
//	while (i <= n) 
//	{
//		i = i * 2;
//		printf("I= %d次\n",i);//i=x^n 所以n = log2n,T(n) = O(log2n)
//	}
//	printf("N= %d次",n);
//}
//int main() 
//{
//	LoveYou(5);//问题规模300次
//	return 0;
//}
