#include "head1.h"


/*void addfile(char  *append,char * path)
{
	FILE *fp;
	char buf[100];
	if((fp=fopen(path,"a+"))==NULL)
	{
		printf("file cannot open!\n");
	}
	else 
	
	strcpy(buf,append);
	fputs(buf,fp);

	fclose(fp);

}
int main()
{
	char* append="123456";
	char* path;
	path="./1.txt";
	addfile(append,path);

}*/
int main()
{
	int a[100];
	int i;
	char *temp;
	char *enter="\n";
	char *all;
	char* path="./1.txt";

	for(i=0;i<100;i++)
	{
		a[i]=0;
	}
	urand(a,100);
	char * test = itoa(a,100);
	addfile(test,"./Rowdata.dat");
	
	struct timeval tv;
	gettimeofday(&tv,NULL);
	long pre = tv.tv_usec;
	SysSort(a,100);
	gettimeofday(&tv,NULL);
	printf("SysSort spend time : %ld us\n",tv.tv_usec - pre);
	test = itoa(a,100);
	addfile(test,"./sys.dat");

	gettimeofday(&tv,NULL);
	pre = tv.tv_usec;
	uSort(a,100);
	gettimeofday(&tv,NULL);
	printf("uSort spend time : %ld us\n",tv.tv_usec - pre);
	test = itoa(a,100);
	addfile(test,"./usort.dat");
	
	readfile("./usort.dat");
	
	/*for(i=0;i<100;i++)
	{
		temp()
		all=(char* ) malloc (strlen(temp)+strlen(enter));
		strcpy(all,temp);
		strcat(all,enter);
		addfile(temp,path);
	}
	readfile(path);*/
	/*show(a,100);
	struct arg temp;
	temp=uoperator(a,100);
	printf("sum is %d\n",temp.sum);
	printf("avg is %f\n",temp.avg);*/
}
