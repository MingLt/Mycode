#include<stdio.h>
#include<string.h>
void switch_printf(int a);//����ת��Ϊ���ֲ���� 
int switch1(char num[]);// ����ת��Ϊ���� 
int switch1(char num[])
{
	if (strcmp("��", num) == 0) return 0;
	if (strcmp("һ", num) == 0) return 1;
	if (strcmp("��", num) == 0) return 2;
	if (strcmp("��", num) == 0) return 3;
	if (strcmp("��", num) == 0) return 4;
	if (strcmp("��", num) == 0) return 5;
	if (strcmp("��", num) == 0) return 6;
	if (strcmp("��", num) == 0) return 7;
	if (strcmp("��", num) == 0) return 8;
	if (strcmp("��", num) == 0) return 9;
	if (strcmp("ʮ", num) == 0) return 10;
	return -1;
}
void switch_printf(int a)
{
	switch (a) {
	case 1:printf("һ");break;
	case 2:printf("��");break;
	case 3:printf("��");break;
	case 4:printf("��");break;
	case 5:printf("��");break;
	case 6:printf("��");break;
	case 7:printf("��");break;
	case 8:printf("��");break;
	case 9:printf("��");break;
	case 10:printf("ʮ");break;
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
	 //�ж������Ƿ����� 
	
	char a1[20] = { 0 }, a2[20] = { 0 }, a3[20] = { 0 };
	while (1)
	{
		scanf("%s%s", a1, a2);
		if (strcmp(a1, "����") == 0)
			break;
		scanf("%s", a3);
		a = switch1(a3);
		if (a == -1) {
			printf("Error");
			return 0;
		}
		if (strcmp(a2, "����") == 0)
			sum += a;
		else if (strcmp(a2, "����") == 0)
			sum -= a;
		a = 0;
	}
	
	//����� 
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
