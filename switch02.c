#include<stdio.h>

int main()
{
	int sc;
	printf("점수입력:");
	scanf("%d",&sc);
	
	switch(sc/10)
	{
		case 10:
	    case 9:
	    	printf("당신의 학점은 A");
	    	break;
	    case 8:
	    	printf("당신의 학점은 B");
	    	break; 	
	    case 7:
	    	printf("당신의 학점은 C");
	    	break;
		case 6:
	    	printf("당신의 학점은 D");
	    	break;		
	    default:
		    printf("당신의 학점은 F");
		    break;
	 }
}				
