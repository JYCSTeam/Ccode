# include <stdio.h>
void huhuan(int * p, int * q);//�������� 

int main(void)
{
	int a = 3;
	int b = 5;
	huhuan(&a, &b);//��Ҫ��ȡ��ַ����Ϊָ����Ҫ���ĵ�ַ// 
	printf("a = %d b = %d\n", a, b);
	return 0;
}
void huhuan(int * p, int * q)//int*���ͣ� ��ŵ���ʵ�εĵ�ַ��// 
{
	int t;
	t = *p;// ��Ϊpָ����a����ô*p���ǵ���a�� 
	*p = *q;
	*q = t;
}
