/*��������2:��Ʊ���*/
#include <stdio.h>
#pragma warning (disable :4996)
void swap(int* p1, int* p2)
{
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void L5_1()
{
	int a, b;
	int* p1 = &a,*p2=&b; /*p1���Va�Ap2���Vb*/
	printf("��J��Ӽƭ�>>");
	scanf("%d,%d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	swap(p1,p2);
	printf("�I�sswap()��\na=%d,b=%d", a, b);
}