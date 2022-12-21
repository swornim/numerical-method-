#include<stdio.h>
#include<math.h>
#define n 6
int main()
{
	float xp,p=0.0,l[50],x[50],a[50][50];
	int i,j;
	printf("Enter x[] and a[0][]");
	
	for(i=0;i<=n;i++)
	{
		printf("\nx[%d]\ta0[0][%d] :",i,i);
		scanf("%f%f",&x[i],&a[0][i]);
	}
	printf("\nEnter xp :");
	scanf("%f",&xp);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			a[i][j]=(a[i-1][j+1]-a[i-1][j])/(x[i+j]-x[j]);
		}
	}
	p=a[0][0];
	for(i=1;i<=n;i++)
	{
		l[i]=1;
		for(j=0;j<=i-1;j++)
		{
			l[i]=l[i]*(xp-x[j]);
		}
		p=p+a[i][0]*l[i];
	}
	printf("The value of f(x) at %f is : %f",xp,p);
	return 0;
}
