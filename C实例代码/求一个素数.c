/*
2020年11月19日22:17:42
判断是不是素数程序
*/
# include <stdio.h>
bool IsPrime(int m)   //此函数判断一个数是不是素数// 
{
	int i;
	for (i = 2; i < m; ++i)
	{
	        if (0 == m % i)
			break;
	}
	if (i == m)
		return true;
	else
		return false;
}
void f(int n)       //此函数求一个数之中有多少个函数并输出// 
{
	int i; 
	for(i = 2; i <= n;++i)
	{
	if (IsPrime(i) )
	printf("%d\n", i);
    }
}
int main(void)
{
	
	int val;
	scanf("%d", &val);
	f(val);
	return 0;
}
