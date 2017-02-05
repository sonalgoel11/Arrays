//Using rand() function . It generates all the no.s that lie 0 and dividend -1.

#include<stdio.h>
#define MAX 21
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,0};
	int i;
	for(i = 0; i < 10; i++)
	{
		arr[i] = rand()%MAX;
		printf("%d ", arr[i]);
	}
} 
