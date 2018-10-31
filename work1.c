#include <stdio.h>
#include <math.h>
#include <assert.h>
main() {
	double a,b,c,d,e,f;
	double t1,t2;
	scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
	assert(fabs(b*d-a*e<1.0e-8));    //1.0e-8±íÊ¾10^£¨-8£©
	if(b*d-a*e!=0){
	t1=(b*f-c*e)/(b*d-a*e);
	printf("x=%lf\n",t1);
}	else
	printf("No result\n");
	if(a*e-b*d!=0){
	t2=(a*f-d*c)/(a*e-b*d);  
	printf("y=%lf",t2);
}	else
	printf("No result");
    return 0;
} 
