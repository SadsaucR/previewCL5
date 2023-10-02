/*指標應用3:陣列存取*/
#include <stdio.h>
#pragma warning (disable:4996)
void L5_2()
{
	int i,sum=0,a[5] = { 44,74,14,24,34 };
	for (i = 0;i < 5;i++)
	{
		sum += *(a + i);
		printf("%d ", *(a + i)); /* *(a+i)=a[i]的指標型態 */
	}
	printf("\n");
	printf("sum=%d", sum);
}
