#include<stdio.h> 
int switch1(char num[]);
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
int main()
{
	char a[][4]={"��","һ","��","��","��","��","��","��","��","��","ʮ","hh"};
	int i=0;
	for(i=0;i<=11;i++){
		if(i==switch1(a[i]))
			continue;
		else if(i==11&&switch1(a[i])==-1)
			continue;
		else
			return 0;
	}
	printf("Pass");
	return 0;
}
