#include<stdio.h>
int main()
{
	int sc;
	
	printf("�����Է�");
	scanf("%d",&sc);
	
	if(sc>=90)
	
		printf("����� ������ 4.0�̰� ����� A�Դϴ�\n");
	
	else if(sc>=80)
	
		printf("����� ������ 3.0�̰� ����� B�Դϴ�\n");
	
	else if(sc>=70)
	
		printf("����� ������ 2.0�̰� ����� C�Դϴ�\n");
	
	else if(sc>=60)
	
		printf("����� ������ 1.0�̰� ����� D�Դϴ�\n");
	
	else
	
		printf("����� ������ 0�̰� ����� F�Դϴ�\n");
	
	
	 
return 0;	
}
