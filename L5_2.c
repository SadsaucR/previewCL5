/*��������3:�}�C�s��*/
#include <stdio.h>
#pragma warning (disable:4996)
void L5_2()
{
	int i,sum=0,a[5] = { 44,74,14,24,34 };
	for (i = 0;i < 5;i++)
	{
		sum += *(a + i);
		printf("%d ", *(a + i)); /* *(a+i)=a[i]�����Ы��A */
	}
	printf("\n");
	printf("sum=%d", sum);
}
