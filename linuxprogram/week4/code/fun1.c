#include "head1.h"

void show(int a[],int n)
{
	int i;
	for (i=0;i<n;i++)
  	{
	 	printf("%d\n",a[i]);
  	}
}

void urand(int a[],int n)
{
	srand((int)time(0));
	int i,j;
	for (i=0;i<n;i++)
  {
		j=rand()%90+10;
		a[i]=j;
  }
}

char * itoa(int * a,int length){
	char * c = (char *)malloc(sizeof(char)*(length*3+1));
	int i,j;
	int each;
	for(i = 0,j = 1;i < length;i++,j+=3){
		each = a[i] / 10;
		c[j-1]=(char)(each + 48);
		each = a[i] % 10;
		c[j]=(char)(each + 48);
		c[j+1]='\n';
	}
	c[length*3] = '\0';
	return c;
}
