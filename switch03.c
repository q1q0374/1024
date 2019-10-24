#include<stdio.h>

int main()
{
	int mo,year,days;
	printf("년도입력:");
	scanf("%d",&year);
    printf("월 입력:");
	scanf("%d",&mo);

    	
	switch(mo)
	{
		case 2:
	       	if(year%4==0 &&year%100!=0||year%400==0)
	    	    days=29;
	    	else
	    	    days=28;
	    	break; 
	    case 4:
	    case 6:
		case 9:
		case 11:
		    days=30;
		    break;			
	    default:
		    days=31;
		    break;
		    
	 }
	 printf("%d",days);
}
