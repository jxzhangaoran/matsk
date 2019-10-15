#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include <sys/time.h>
#include <unistd.h>

struct arg
{
	float avg;
	int sum;
};
void show(int*,int);
void urand(int*,int);
void readfile(char *path);
void addfile(char  *append,char * path);
int cmp(const void *a, const void *b);
void SysSort(int a[],int n);
void uSort(int a[], int n);
int num_String(int x, char *s);
char * itoa(int * a,int length);


struct arg uoperator(int*,int);
