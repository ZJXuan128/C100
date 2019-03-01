#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct node)
int n;
struct node
{
	int data;
	struct node * next;
};
struct node * reverse(struct node *head)		//递归反转单链表 
{
    if (head == NULL || head -> next == NULL)
		return head;
	struct node *p = head -> next;
	struct node *newhead =  reverse(p);
	p -> next = head;    
	head ->next = NULL;    
	return newhead;
}
struct node * creat()  //创建链表 
{
	struct node * head=NULL;
	struct node * p1,*p2;
	n=0;
	p1=p2=(struct node * )malloc(LEN);
	scanf("%d",&p1->data);
	while(p1->data!=0)
	{
		n=n+1;
		if(n==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct node * )malloc (LEN);
		scanf("%d",&p1->data);
		getchar();
	}
	p2->next=NULL;
	return(head);
}
struct node * del(struct node * head)
{
	int a;
	struct node * p1,* p2=head;
	printf("输入删除节点数据：");
	scanf("%d",&a);
	if(head->data==a)
	{
		p1=head;
		head=head->next;
		free(p1);
		printf("已删除！\n"),n-=1;
	}
	else
	{
		for(p2;p2->next;p2=p2->next)
			{
				if(p2->next->data==a)
				{
					p1=p2->next;
					p2->next=p1->next;
					free(p1);
				}
				printf("已删除！\n"),n-=1;
			}
	}
}
int main(void)
{
	struct node * head;
	head=creat(); 
	head=reverse(head);
	head=del(head);
}
