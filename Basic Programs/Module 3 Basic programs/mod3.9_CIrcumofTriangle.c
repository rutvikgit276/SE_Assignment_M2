// 10.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
main()
{
	int area,w,h,l;
	
	printf("\n\n\t Enter the width of prism",w);
	scanf("%d",&w);
	
	printf("\n\n\t Enter the length of prism",l);
	scanf("%d",&l);
	
	printf("\n\n\t Enter the height of prism",h);
	scanf("%d",&h);
	
	area=2*(w*l+h*l+h*w);
	
	printf("\n\n\t Area of rectangular prism:%d",area);
	
	
	
	
	
}
