#include<stdio.h>
#include<math.h>
long long int  pow1(int a,int b)
{
	int i;
	long long int num = 1;
	for(i = 0; i < b; i++)
	{
		num = num * a;
//		num = num % (pow1(10,9) + 7);
	}
	return num;	
}

int main()
{
	int n;
	long long int num = 0;
	scanf("%d", &n);
	int arr[n];
	int i = 0;
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < n; i++)
	{
		num = arr[i] * pow1(10,i) + num;
		num = num % (pow1(10,9) + 7);
	}
	printf("%lld",num);
        return 0;
}
     
