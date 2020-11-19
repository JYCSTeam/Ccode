/*
2020年11月19日22:21:43
指针互换俩个数的值
*/
# include <stdio.h>
void huhuan(int * p, int * q);//函数申明 

int main(void)
{
	int a = 3;
	int b = 5;
	huhuan(&a, &b);//需要加取地址，因为指针需要它的地址// 
	printf("a = %d b = %d\n", a, b);
	return 0;
}
void huhuan(int * p, int * q)//int*类型， 存放的是实参的地址；// 
{
	int t;
	t = *p;// 因为p指向了a，那么*p就是等于a； 
	*p = *q;
	*q = t;
}
