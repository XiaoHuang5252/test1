#include<stdio.h>
int main()
{
	float a,b,c;
	while(a != -1)
	{
		printf("请输入三角形三边边长\n");
		scanf("%f\n%f\n%f",&a,&b,&c);
		if(a+b>c && a+c>b && b+c>a)
		{
			if(a==b&&b==c&&a==c)
			{
				printf("等边三角形\n");	
			}
			else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
			{
				printf("直角三角形\n"); 
			}
			else if(a==b||b==c|a==c)
			{
				printf("等腰三角形\n");
			}
			else printf("普通三角形\n");
		}
		else
		{
			printf("这不是三角形\n");
		}

	}
		return 0;
}
