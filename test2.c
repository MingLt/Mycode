#include<stdio.h>
int switch_printf(int a);
int switch_printf(int a)
{
	switch (a) {
	case 1:printf("һ");return 1;
	case 2:printf("��");return 2;
	case 3:printf("��");return 3;
	case 4:printf("��");return 4;
	case 5:printf("��");return 5;
	case 6:printf("��");return 6;
	case 7:printf("��");return 7;
	case 8:printf("��");return 8;
	case 9:printf("��");return 9;
	case 10:printf("ʮ");return 10;
	}
}
int main()
{
	char a[][4]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};
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
