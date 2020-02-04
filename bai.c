#include<stdio.h>
#include<string.h>
void switch_printf(int a);//数字转换为汉字并输出 
int switch1(char num[]);// 汉字转换为数字 
int switch1(char num[])
{
	if (strcmp("零", num) == 0) return 0;
	if (strcmp("一", num) == 0) return 1;
	if (strcmp("二", num) == 0) return 2;
	if (strcmp("三", num) == 0) return 3;
	if (strcmp("四", num) == 0) return 4;
	if (strcmp("五", num) == 0) return 5;
	if (strcmp("六", num) == 0) return 6;
	if (strcmp("七", num) == 0) return 7;
	if (strcmp("八", num) == 0) return 8;
	if (strcmp("九", num) == 0) return 9;
	if (strcmp("十", num) == 0) return 10;
	return -1;
}
void switch_printf(int a)
{
	switch (a) {
	case 1:printf("一");break;
	case 2:printf("二");break;
	case 3:printf("三");break;
	case 4:printf("四");break;
	case 5:printf("五");break;
	case 6:printf("六");break;
	case 7:printf("七");break;
	case 8:printf("八");break;
	case 9:printf("九");break;
	case 10:printf("十");break;
	}
}
int main(int argc,char *argv[])
{
	freopen(argv[1],"r",stdin);
	char s1[20], s2[20], s3[20], s4[20] = { 0 };
	int n = 0, a = 0, b, c, sum = 0;
	scanf("%s%s%s%s", s1, s2, s3, s4);
	n = switch1(s4);
	sum = n;
	if (n == -1) {
		printf("Error");
		return 0;
	}                 
	 //判断输入是否有误 
	
	char a1[20] = { 0 }, a2[20] = { 0 }, a3[20] = { 0 };
	while (1)
	{
		scanf("%s%s", a1, a2);
		if (strcmp(a1, "看看") == 0)
			break;
		scanf("%s", a3);
		a = switch1(a3);
		if (a == -1) {
			printf("Error");
			return 0;
		}
		if (strcmp(a2, "增加") == 0)
			sum += a;
		else if (strcmp(a2, "减少") == 0)
			sum -= a;
		a = 0;
	}
	
	//输出答案 
	b = 10;
	if (sum <= 10)
		switch_printf(sum);
	else if (sum < 20)
	{
		switch_printf(b);
		switch_printf(sum % 10);
	}
	else if (sum % 10 == 0)
	{
		switch_printf(sum / 10);
		switch_printf(b);
	}
	else
	{
		switch_printf(sum / 10);
		switch_printf(b);
		switch_printf(sum % 10);
	}
	return 0;
}
