/*��������:�ǭ�VS�ǧ} �`�N�O�����}*/
#include <stdio.h>
#pragma warning (disable:4996)
void passbyr(int* p1) /*�ŧi�ۭq��ơA��ƫ��и�ƫ��A*/
{
	printf("����ptr=%d �O�����}=%p (�ǧ})\n", *p1,p1);
}
void passbyv(int value) 
{
	printf("�ܼ�value=%d �O�����}=%p (�ǭ�)\n", value, &value);
}
void L5()
{
	int a;
	int* ptr =&a; /*�ŧiptr���СA���V�ܼ�a���a�}*/
	printf("�п�J�ƭ�>>");
	scanf("%d",&a);
	printf("�ܼ�a=%d �O�����}=%p\n", a, &a);
	passbyv(a);
	passbyr(ptr);
}