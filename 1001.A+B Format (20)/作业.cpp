#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,t,x,y,z;
	scanf ("%d%d",&a,&b);
	c=a+b;
	if (c>=-999&&c<=999)
	{
		printf ("%d",c);
	}
	if (c<-999999)
	{
		t=abs(c);
	    x=t/1000000;
		y=t/1000-x*1000;
		z=t-x*1000000-y*1000;
		printf ("-%d,%03d,%03d",x,y,z);
	}
	if (c>999999)
	{
		x=c/1000000;
		y=c/1000-x*1000;
		z=c-x*1000000-y*1000;
		printf ("%d,%03d,%03d",x,y,z);
	}
	if (c<-999&&c>=-999999) 
	{
		t=abs(c);
		y=abs(t/1000);
		z=t%1000;
		printf ("-%d,%03d",y,z);
	}
	if (c>999&&c<=999999)
	{
		y=c/1000;
		z=c%1000;
		printf ("%d,%03d",y,z);
	}
	return 0;
}
