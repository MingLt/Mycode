#include<stdio.h> 
int switch1(char num[]);
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
int main()
{
	char a[][4]={"零","一","二","三","四","五","六","七","八","九","十","hh"};
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
