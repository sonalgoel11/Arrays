#include<stdio.h>
#define Max 100
int check_position(int *arr, int n, int num)
{
        int pos = n;
	int i = 0;
	for( i = 0; i < n; i++)
	{
		if(arr[i] > num)
		{
			pos = i;
			break;
		}
	}
	return pos;
}
int* insert_at_position(int *arr, int n, int num, int pos)
{
	int k = n-1;
	while(k >= pos)
	{
		arr[k+1] = arr[k];
		k--;
	}
	arr[pos] = num;
	return arr;
}
void print_array(int *arr, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%d  ",arr[i]);
	}
	return;
}
int main()
{
	int arr[Max];
	int n;
	scanf("%d", &n);
 	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int num;
	scanf("%d", &num);
	int pos = check_position(arr, n, num);
        int * s = insert_at_position(arr, n, num, pos);
	print_array(s, n+1);
	return 0;
}

