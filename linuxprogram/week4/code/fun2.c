#include "head1.h"

struct arg uoperator(int a[],int n)
{
	struct arg temp;
	temp.sum=0;
	temp.avg=0.0;
	int i;
	for (i=0;i<n;i++)
  {
	 temp.sum+=a[i];
  }
	temp.avg=(float)(temp.sum/n);

	return temp;
}

int cmp(const void *a, const void *b)      //declare the sequence of result
{
	return *(int *)a - *(int *)b;
}


void uSort(int a[], int n)
{
	int i,j;
	int temp;
	for (i=0;i<n-1;i++)
	{	
		for(j=0;j<n-i-1;j++)
		{
			if (a[j] > a[j+1])
			{
				int temp= a[j];
				a[j]= a[j+1];
				a[j+1]=temp;
			}

		}
	}
}
void SysSort(int a[],int n)               
{
	qsort(a,n,sizeof(a[0]),cmp);
}
int num_String(int x, char *s) // int x:数字数组；char *s：数字字符串数组
{
    int v, xx, i, j, n = 0;
    char c;
    xx = abs(x); // 求数值x的绝对值
    while (1)
    {
        v = xx % 10;    // 对获取绝对值x的数值xx 求余数
        s[n] = v + '0'; // 数值转换为字符-存入到数组中
        n++;            // 位移以此存储多个余数存储

        xx = (xx - v) / 10; // 求整
        if (xx == 0)
            break;
    }

    if (x < 0) // 如果int型中数值为负数
    {
        s[n] = '-'; // 将负号标识赋给char型字符串数组s[]
        n++;        // 位移赋值
    }

    for (i = 0; i < n / 2; i++)
    {
        c = s[i];            //赋值给char c
        s[i] = s[n - i - 1]; // 一共n个字符
        s[n - i - 1] = c;
    }
    s[n] = '\0'; // 字符串结束标识符
}


