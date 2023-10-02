/*指標應用:傳值VS傳址 注意記憶體位址*/
#include <stdio.h>
#pragma warning (disable:4996)
void passbyr(int* p1) /*宣告自訂函數，整數指標資料型態*/
{
	printf("指標ptr=%d 記憶體位址=%p (傳址)\n", *p1,p1);
}
void passbyv(int value) 
{
	printf("變數value=%d 記憶體位址=%p (傳值)\n", value, &value);
}
void L5()
{
	int a;
	int* ptr =&a; /*宣告ptr指標，指向變數a的地址*/
	printf("請輸入數值>>");
	scanf("%d",&a);
	printf("變數a=%d 記憶體位址=%p\n", a, &a);
	passbyv(a);
	passbyr(ptr);
}