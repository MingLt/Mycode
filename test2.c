#include<stdio.h>
int switch_printf(int a);
int switch_printf(int a)
{
	switch (a) {
	case 1:printf("一");return 1;
	case 2:printf("二");return 2;
	case 3:printf("三");return 3;
	case 4:printf("四");return 4;
	case 5:printf("五");return 5;
	case 6:printf("六");return 6;
	case 7:printf("七");return 7;
	case 8:printf("八");return 8;
	case 9:printf("九");return 9;
	case 10:printf("十");return 10;
	}
}
int main()
{
	char a[][4]={"零","一","二","三","四","五","六","七","八","九","十"};
	int i;
	for(i=1;i<=10;i++){
		if(switch_printf(i)==i)
			continue;
		else
			return 0;
	}
	printf("\nPass");
	return 0;
}
