#include<stdio.h>
int check_position(int *arr, int n, int num)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(arr[i] > num)
		{
			return i-1;
		}
                if(arr[i] == num)
		{
			return i;
		}
	}
	return n;
}
int * delete_position_element(int *arr, int *n, int pos)
{
//	printf("%d %d\n",pos,*n);
        if(pos < *n)
	{
		
		while(pos < (*n)-1)
		{
			arr[pos] = arr[pos+1];
			pos++;
		}
		*n = *n - 1;
	}

	return arr;
}
void print(int *arr, int *m)
{
	int i;
	for(i=0; i < *m; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%d",(arr+i));
	}
	int num;
 	scanf("%d", &num);
	int pos = check_position(arr, n, num);
	int *m = &n;
	int *s = delete_position_element(arr, m, pos);
        print(arr, m);
	return 0 ;
}
