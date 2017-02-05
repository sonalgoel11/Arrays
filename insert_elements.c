#include<stdio.h>
#define Max 100
int* insert_at_pos(int *arr, int pos, int num, int size)
{
	int k = size-1;
//	printf("_%d %d_", pos, k);
        while(k >= pos)
	{
		arr[k+1] = arr[k];
		k--;	
	}
	arr[pos] = num;
        return arr;
}
void print_arr(int *arr,int n)
{
	int i = 0;
	for(i = 0; i < n; i++)
	{
		printf("%d  ",*(arr + i));
	}
	return;
}
int main()
{
	int arr[Max];
	int i;
	int n;
	scanf("%d", &n);
	for(  i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int num;
	int pos;
 	scanf("%d", &num);
	scanf("%d", &pos);
	int *s;
	if(pos >= 0 && pos <= n)
        {
	if(pos == n)
	{
		arr[pos] = num;
	}
	else
	{
	 	s = insert_at_pos(arr, pos-1, num, n);
	}
	
	print_arr(s, n+1);
	}
        else
	{
		printf("Can't Be inserted");
	}

	return 0;
}
		
