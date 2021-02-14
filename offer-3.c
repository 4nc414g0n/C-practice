#include<stdio.h>
int main()
{
	int m,n;
	int t;
	scanf("%d %d\n",&m,&n);
	scanf("%d",&t);
	while(t>1000000)
	{
		printf("\'t\'>=1000\n");
		scanf("%d\n",&t);
	}
	int arr[100][1000]={0};
	int i,k,j=1;
	do{
		j=1;
		for(i=0;i<m;i++)
		{
			for(k=0;k<n;k++)
			{
				scanf("%d",&arr[i][k]);
			}
		}
		for(i=0;i<m-1;i++)
		{
			for(k=0;k<n-1;k++)
			{
				if((arr[i][k+1]<arr[i][k])||(arr[i+1][k]<arr[i][k]))
				{
					printf("\nreinput\n");
					j=3;
					break;
				}
			}
			if(j==3)
				break;
		}
	}while(j==3);
	for(i=0;i<m;i++)
		{
			for(k=0;k<n;k++)
			{
				if(arr[i][k]==t)
				{
					printf("Yes\n");
					goto flag;
				}
			}
		}
	printf("No\n");
	flag:return 0;

}