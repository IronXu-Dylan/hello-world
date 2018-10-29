#include <stdio.h>
main() {
	double a,b,c,d,e,f,x,y;
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
	x=(b*f-c*e)/(b*d-a*e);
	y=(c*d-a*f)/(b*d-a*e);
    printf("x=%lf,y=%lf",x,y);
    return 0;
} 
