# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node * pNext;
}NODE,* PNODE;

PNODE create_list(void);
void ergodic_list(PNODE pHead);
int length_list(PNODE pHead);
void sort_list(PNODE pHead);


int main(void)
{
	PNODE pHead;
	pHead = create_list();
	printf("你输入的数是：(未排序)\n");
	ergodic_list(pHead);
	sort_list(pHead);
	printf("你输入的数是：(已排序)\n");
	ergodic_list(pHead);
	return 0;
 } 
PNODE create_list(void)
{
	int i, val, len;
	
	printf("请输入链表的长度:(输入每次数字后依次回车)\n");
	scanf("%d", &len);
	PNODE pHead = (PNODE)malloc(sizeof(NODE));
	if(NULL == pHead)
	{
		exit(-1);
	}
	PNODE pTail = pHead;
	pTail->pNext = NULL;
	printf("请输入元素的值并依次回车\n");
	for (i=0; i<len; ++i)
	{
		scanf("%d", &val);
		PNODE pNew = (PNODE)malloc(sizeof(NODE));
		if(NULL == pNew)
		{
			exit(-1);
		}	
		pNew->data = val;
		pTail->pNext = pNew;
		pNew->pNext = NULL;
		pTail = pNew;
	}
	return pHead;
 } 
  void ergodic_list(PNODE pHead) //遍历链表
 {
 	PNODE p = pHead->pNext ;
 	while (NULL != p)
 	{
 		printf("%d\t", p->data );
 		p = p->pNext ;
	 }
	 printf("\n");
	 return;
 }
  int length_list(PNODE pHead) //长度
 {
 	int len = 0;
 	PNODE p = pHead->pNext ;
 	
 	while (NULL != p)
 	{
 		len++;
		 p = p->pNext ;	
	 }
	 return len;
 }
  void sort_list(PNODE pHead)//排序链表
 {
 	int len = length_list(pHead);
	int i, j, t;
 	PNODE p, q;
 	for (i=0, p=pHead->pNext ; i<len-1; ++i,p=p->pNext )
 	{
 		for (j=i+1,q=p->pNext ; j<len; ++j, q=q->pNext )
 		{
 			if (p->data > q->data  )
 			{
 				t = p->data;
 				p->data  = q->data  ;
 				q->data  = t;
			 }
		 }
	 }
 }
