#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student
{char name[20];
long num;
struct student * next;
};
int n;
struct student * input()  //创建链表 
{
	struct student * head=NULL;
	struct student * p1,*p2;
	n=0;
	p1=p2=(struct student * )malloc(LEN);
	scanf("%s,%ld",&p1->name,&p1->num);
	while(p1->num!=0)
	{
		n=n+1;
		if(n==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct student * )malloc (LEN);
		scanf("%s,%ld",&p1->name,&p1->num);
		getchar();
	}
	p2->next=NULL;
	return(head);
}

void output (struct student * head)  //正序输出 
{
	struct student * p;
	p=head;
	if(head!=NULL)
	do
	{
		printf("%s %ld\n",p->name,p->num);
		p=p->next;
	}while(p!=NULL);
}
void re_output(struct student * head)  //反序输出 
{
	struct student *p1=head,* p2;
	p2=p1->next;
	if (p2!=NULL)
		re_output(p2);
	printf("%s %ld\n",p1->name,p1->num);
}
int main(void)
{
	struct student *head;
	head=input();
	output(head);
	re_output(head);
} 
