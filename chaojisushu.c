#include <stdio.h>
#include <math.h>
int isPrime(int x) {
	int c;
	if(x==0)
	return 0;
    for(c=2;c<x;c++) {
    if(x%c==0)
    return 0;
    }
    return 1;
}
int sumNum(int x) {
	int sum=0;
    while(x!=0) {
        sum+=x%10;
        x/=10;
}
    return sum;
}
int mulNum(int x) {
	int mul=1;
	while(x!=0) {
		mul*=x%10;
		x/=10;
	}
	return mul;
}
int sqrNum(int x) {
	int sqr=0;
	while(x!=0) {
		sqr+=pow(x%10,2);
		x/=10;
	}
	return sqr;
}
int main() {
	int i,ssum=0,smax=0,snum=0;
	for(i=100;i<9999;i++) {
		int sum=sumNum(i);
		int mul=mulNum(i);
		int sqr=sqrNum(i);
		if(isPrime(i)==1&&isPrime(sum)==1&&isPrime(mul)==1&&isPrime(sqr)==1) {
		 snum++;
		 ssum+=i;
		if(i>smax)
		 smax=i;
	}
}
	printf("%d %d %d",snum,ssum,smax);
	return 0;
}
