#include <stdio.h>
#include <math.h>
main() {
	double x1;
	double x2;
	double d;
	int a,b,c;
	printf("请输入a，b，c（数字中间用空格隔开）\n") ;
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0) {
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("有两个解，x1=%lf,x2=%lf",x1,x2);
	}
	else if(d==0) {
		x1=(-b)/(2*a);
		x2=x1;
		printf("有一个解，x1=%lf,x2=%lf",x1,x2);
	}
	else{
		printf("无解");
	}
	return 0;
}
