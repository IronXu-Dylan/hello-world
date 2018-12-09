#include <stdio.h>
int Prime(int x) {
	int i;
	if(x==0||x==1)
	return 0;
	for(i=2;i<x;i++) {
		if(x%i==0)
		return 0;
	}
	return 1;
}
int main() {
	int n;
	scanf("%d",&n);
	if(Prime(n)==1)
	printf("此数是素数"); 
	else
	printf("此数不是素数");
	return 0;
}
