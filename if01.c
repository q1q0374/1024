#include<stdio.h>

int main()
{
	int age,money=10000;
	
	printf("나이입력");

	scanf("%d",&age);
	
	if(age>=19||age>=60)
	{
		money -= 5000;
	}
	
	printf("당신의 입장료는 %d원입니다.\n",money);
	
	return 0;
}
