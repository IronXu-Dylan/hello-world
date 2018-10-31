#include <stdio.h>
#include <math.h>
main() {
	double a,b,c,d,e,f,x,y;
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
	if(b*d-a*e==0&&c*e!=b*f) //&&表示且,||表示或 
	printf("No solution");
	else if(b*d-a*e==0&&c*e==b*f)
	printf("Infinite solutions");
    else if(b*d-a*e!=0){
	x=(b*f-c*e)/(b*d-a*e);
	y=(c*d-a*f)/(b*d-a*e);
    printf("solution:x=%lf,y=%lf",x,y);
}
    return 0;
} 
