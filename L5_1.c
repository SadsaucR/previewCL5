/*指標應用2:函數控制*/
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
	int* p1 = &a,*p2=&b; /*p1指向a，p2指向b*/
	printf("輸入兩個數值>>");
	scanf("%d,%d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	swap(p1,p2);
	printf("呼叫swap()後\na=%d,b=%d", a, b);
}