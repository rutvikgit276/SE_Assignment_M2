// 29.Convert minutes into seconds and hours

#include<stdio.h>
main()
{
	int hours,minutes,seconds;
	
	printf("Enter minutes");
    scanf("%d",&minutes);
    
    hours=minutes/60;
    seconds=minutes*60;
    
    printf("%d minutes is approximately %d seconds and %d hours",minutes,seconds,hours);
    
}
