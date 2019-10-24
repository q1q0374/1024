#include<stdio.h>

int main()
{
	int age,m;
	printf("당신의 나이를 입력");
	scanf("%d",&age);
	 
	if(age>19)
	{
		printf("당신은 성인");
		m=15000;
		printf("입장료 %d원",m);
	}
	else
	{
		printf("당신은 미성년");
		m=9000;
		printf("입장료 %d원",m); 
	}

	
return 0;	
}
