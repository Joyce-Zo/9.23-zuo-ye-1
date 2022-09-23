#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

			 水	 仙	 花	 数
  代码 1
int qiuweishu(int input)
{
	int count = 0;
	while (input)
	{
		input /= 10;
		count++;
	}
	/*int count = 0;
	do
	{
		count++;
		input /= 10;
	} while (input != 0);*/
	return count;
}
int main()
{
	int input = 1;

	for (input = 1; input <= 100000; input++)
	{
		int n = 0;
		n = qiuweishu(input);
		int input1 = input;
		int sum = 0;
		while (input1)
		{
			int m = input1 % 10;
			sum += pow(m, n);
			input1 /= 10;
		}
		if (sum == input)
		{
			printf("%d ", sum);
		}
	}
	return 0;
}

  代码 2
int main()
{
	int i = 0;
	int tmp = 0;
	for (i = 1; i <= 100000; i++)
	{
		tmp = i;
		int n = 0;
		int sum = 0;
		while (tmp)
		{
			n++;
			tmp /= 10;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10,n);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", sum);
		}
	}
	return 0;
}

int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}

//		2.	打印任意行的菱形
//   代码 1
int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	int j = 0;
	int tmp = line;
	int tmp2 = line;
	int line2 = line;
	int line3 = line;
	while (line+1)
	{
		float tmp = line;
		for (i = 0; i < line; i++)
		{
			printf(" ");
		}
		for (tmp; tmp<=tmp2;tmp+=0.5)
		{
			printf("*");
		}
		printf("\n");
		line--;
	}
	while (line2)
	{
		int tmp = line2;
		int tmp2 = line3;
		for (tmp; tmp<=tmp2; tmp++)
		{
			printf(" ");
		}
		float i = 0;
		for (i = 0; i < line2-0.5; i+=0.5)
		{
			printf("*");
		}
		printf("\n");
		line2--;
	}
	return 0;
}

//  代码 2
int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	    打印上半部分   - line行
	for (i = 0; i <line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");  //   line -1 个空格
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");  //   从1个*开始+，每行2n-1个 - 1、3、5、7、9、11、13
		}					//   这个n是 line，比下面大
		printf("\n");
	}
	/*  打印下半部分 - line -1 行*/
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf(" "); // 从1个空格开始
		}
		for (j = 0; j <2*(line-i-1)-1; j++)
		{
			printf("*"); // 从2n-1个开始  11、9、7、5、3、1，这个n是line-1，比上面小
		}
		printf("\n");
	}
	return 0;
}
