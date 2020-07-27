#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	int arr[10][10]={0};
	for(int boom=0;boom<20;)
	{
		int i=rand()%100;
		if(arr[i/10][i%10]==0)
		{
			arr[i/10][i%10]=9;
			boom++;
			}
		}
	for(int j=0;j<10;j++)
	{
		for(int k=0;k<10;k++)
		{
			if(arr[j][k]!=9)
			{
			if(j-1>=0 && k-1>=0 && arr[j-1][k-1]==9) arr[j][k]++;
			if(j-1>=0 && arr[j-1][k]==9) arr[j][k]++;
			if(j-1>=0 && k+1<10 && arr[j-1][k+1]==9) arr[j][k]++;
			if(k-1>=0 && arr[j][k-1]==9) arr[j][k]++;
			if(k+1<10 && arr[j][k+1]==9) arr[j][k]++;
			if(j+1<10 && k-1>=0 && arr[j+1][k-1]==9) arr[j][k]++;
			if(j+1<10 && arr[j+1][k]==9) arr[j][k]++;
			if(j+1<10 && k+1<10 && arr[j+1][k+1]==9) arr[j][k]++;
			}
			}
		}
	for(int j=0;j<10;j++)
	{
		for(int k=0;k<10;k++)
		{
			printf("%d ",arr[j][k]);
			}
		printf("\n");
		}
	}
