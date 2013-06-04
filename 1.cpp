#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
void main()
{
int* a;
int n, i, k;
printf("Razmer massiva: \n");
scanf("%d", &n);
a=(int*)calloc(n,sizeof(int));
printf("Do sortirovki\n");
srand(time(NULL));
for(i=0;i<n;i++)
{
a[i]=rand()%100;
printf("%d ", a[i]);
}
printf("\nPosle sortirovki\n");
for(i=0;i<n;i++)
{
for(k=0;k<n-i-1;k++)
{
  if (a[k]>a[k+1])
	{
		int m=a[k];
		a[k]=a[k+1];
		a[k+1]=m;
	}
}
}
for(i=0;i<n;i++)
{
printf("%d ", a[i]);
}
free (a);
getch();
}