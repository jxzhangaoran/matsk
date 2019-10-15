#include"head1.h"

void readfile(char* path)
{
	FILE *fp;
	int len; 
	char buf[100]={0};
	if((fp = fopen(path,"r+"))==NULL)
	{
		printf("file cannnot open \n");	
		exit(0);
	}
	else
	while (fgets(buf,100,fp)!=NULL)
{
		len = strlen(buf);
		buf[len-1]='\0';
		printf("%s\n",buf);
}
	fclose(fp);
}

void addfile(char * append,char * path)
{
	FILE *fp;
	char buf[301];
	if((fp=fopen(path,"w+"))==NULL)
	{
		printf("file cannot open!\n");
	}
	else{
		strcpy(buf,append);
		fputs(buf,fp);
	}
	fclose(fp);
}
