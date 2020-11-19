#include<stdio.h>
#include<string.h>

typedef struct Student
{
	int sno;
	char sname[30];
	char sex[20];
	int age;
	float English;
	float math;
	float Chinese;
	float _linux;
	double mean;
}stu;

stu initStu(stu);
double getMeanByStu(stu);
void printStu(stu);
void setStudents();
void bubble_sort(double[], int);

#define mian main
int mian(void){
		//stu s1;
		setStudents();
		//printStu(s1);
	}

void setStudents(){
		
		int quantity;
		printf("please input in studen quantity: \t");
		scanf("%d", &quantity);
		stu s1[quantity];
		double means[quantity];
		for(int i = 0; i < quantity; i++) //输入几次 初始化几个
		{
			printf("this is %d studen:", i+1);
			s1[i] = initStu(s1[i]);
			means[i] = getMeanByStu(s1[i]);
			}
		printf("mean by sorted is :\n");//开始排序
		for(int i =0; i< quantity; i++)
		{
			printf("%s 的平均是: %0.1f\n", s1[i].sname, means[i]);
			s1[i].mean = means[i];
			}
		bubble_sort(means,quantity);
		printf("mean by sort is (排序之后高分排名):\n");
		for(int i =0; i< quantity; i++)
		{
			for(int j = 0; j < quantity; j++)
			{	
				if(means[i] == s1[j].mean)
				{
					printStu(s1[j]);
					}
				}
			
			}
	}


void printStu(stu s){
	printf("this is output to a student: (输出学生) \n");
	printf("sno\t | sname\t | sex\t | age\t | English | math | Chinese | linux | 平均分\n");
	printf("%d\t | %s\t | %s\t | %d\t | %0.1f\t | %0.1f\t | %0.1f\t | %0.1f | %0.1lf\n", s.sno, s.sname, s.sex, s.age, s.English, s.math, s.Chinese, s._linux,s.mean);
	}
	
void  bubble_sort(double arr[], int len) { //冒牌排序
    int i, j;
    double temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
             if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
			}
 }

double getMeanByStu(stu s) //求平均数
{
	double mean;
	mean = (s.Chinese + s.English + s._linux + s.math)/4;
	return mean;
	}

stu initStu(stu s) //将一个学生初始化
{
	printf("this is create a student\n");
	printf("please input in sno: \t");
	scanf("%d", &s.sno);
	printf("please input in sname: \t");
	scanf("%s", s.sname);
//	strcpy(s.sname,name);
	printf("please input in sex: \t");
	scanf("%s", s.sex);
	printf("please input in age: \t");
	scanf("%d", &s.age);
	printf("please input in English: \t");
	scanf("%f", &s.English);
	printf("please input in math: \t");
	scanf("%f", &s.math);
	printf("please input in Chinese: \t");
	scanf("%f", &s.Chinese);
	printf("please input in linux: \t");
	scanf("%f", &s._linux);
	return s;
}
