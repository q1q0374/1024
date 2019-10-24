#include<stdio.h>
int main()
{
	int sc;
	
	printf("점수입력");
	scanf("%d",&sc);
	
	if(sc>=90)
	
		printf("당신의 학점은 4.0이고 등급은 A입니다\n");
	
	else if(sc>=80)
	
		printf("당신의 학점은 3.0이고 등급은 B입니다\n");
	
	else if(sc>=70)
	
		printf("당신의 학점은 2.0이고 등급은 C입니다\n");
	
	else if(sc>=60)
	
		printf("당신의 학점은 1.0이고 등급은 D입니다\n");
	
	else
	
		printf("당신의 학점은 0이고 등급은 F입니다\n");
	
	
	 
return 0;	
}
